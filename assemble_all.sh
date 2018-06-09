#!/bin/bash
PROJECT_SOURCE=/home/ngashok/Projects/cloud_ikc

#build 3d party
#build cligen-master
echo "\nBuilding cligen.....\n"
cd $PROJECT_SOURCE/3rdparty/cli/cligen-master      
#./configure
make
make install

#build clixon
cd $PROJECT_SOURCE/3rdparty/cli/clixon-master
#./configure
make
make install
make install-include

cd $PROJECT_SOURCE/3rdparty/cli/clixon-master/example
make
make install

#Generate protobufs for all yang files (for now one)
mkdir $PROJECT_SOURCE/generated_files
export PYTHONPATH=$PROJECT_SOURCE/3rdparty/cli/pyang
$PROJECT_SOURCE/3rdparty/cli/pyang/bin/pyang  --plugindir  $PROJECT_SOURCE/3rdparty/cli/pyang/plugins/ -f proto  -o $PROJECT_SOURCE/generated_files/test.proto $PROJECT_SOURCE/3rdparty/cli/clixon-master/example/ietf-dpdk\@2015-05-06.yang

#Generate cc file from generated protobuf using google's protoc
protoc -I=$PROJECT_SOURCE/generated_files --cpp_out=$PROJECT_SOURCE/generated_files $PROJECT_SOURCE/generated_files/test.proto 

cd $PROJECT_SOURCE/3rdparty/google_perftool/gperftools-master/
#make
#make install
