#Takes a .yang file as input and converts it into .proto format
#.proto is later fed to google protbuf 
#!/usr/bin/perl
use strict;
my $yang_filename;
my $proto_filename;
my $line_buffer;
my $module_name;
my $namespace;
my $revision;

my $leaf_name;
my $leaf_type;
my $temp;

my $SRC_DIR = "/home/ngashok/Projects/my_ikc_cloud/scripts/";
my $DST_DIR = "$SRC_DIR/gen_proto";
#leaf node associate array
my %leaf_node_hash;
#subroutines
sub parse_module {
    print $_;
}

sub print_file {
    print OUTFILE $_;
}

sub execute_protoc {
    system("protoc -I=$SRC_DIR --cpp_out=$DST_DIR $DST_DIR/$proto_filename" );
}

sub generate_protobuf_from_yang {
    $proto_filename = $ARGV[1];
    open (OUTFILE, ">$proto_filename");
    print OUTFILE "\nsyntax = \"proto3\";\n";
    print OUTFILE "message FirstProtoBuf {\n";
    print OUTFILE "$leaf_type $leaf_name = 1;\n";
    print OUTFILE "}\n";
    close (OUTFILE);
}

$yang_filename = $ARGV[0];
open (INFILE, $yang_filename);
while (<INFILE>) {
    $line_buffer = $_;
    print $line_buffer;
    if  ($line_buffer =~ /\s*module\s+(\S+)\s+\{/ ) {
        $temp = ($line_buffer =~ /\s*module\s+(\S+)\s+/); 
        $module_name = $1;
        print $module_name;
        print "\n";
    }

    if  ($line_buffer =~ /\s*namespace\s+(\S+)/ ) {
        $temp = ($line_buffer =~ /\s*namespace\s+(\S+)/ ); 
        $namespace = $1;
        print $namespace;
        print "\n";
    }

    if  ($temp=($line_buffer =~ /\s*revision\s+(\S+)\s*\{/) ) {
        $revision = $1;
        print $revision; 
        print "\n";
    }   

    if ($temp=($line_buffer =~ /\s*leaf\s+(\S+)\s*\{/) ) {
        $leaf_name = $1;
        print $leaf_name;
        print "\n";
        while (<INFILE>) {
            $line_buffer = $_;
            if ($temp = ($line_buffer =~ /\s*type\s+(\S+)/)) {
                $leaf_type = $1;
                chop($leaf_type);
                print "\nFound type $leaf_type"; 
                $leaf_node_hash{$leaf_name} = $leaf_type;
                last;
            }
        }
    }

    generate_protobuf_from_yang();
}
close (INFILE);

execute_protoc();
exit;
