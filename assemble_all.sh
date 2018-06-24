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
$PROJECT_SOURCE/3rdparty/cli/pyang/bin/pyang  --plugindir  $PROJECT_SOURCE/3rdparty/cli/pyang/plugins/ -f proto  -o $PROJECT_SOURCE/generated_files/ietf-dpdk\@2015-05-06.proto $PROJECT_SOURCE/3rdparty/cli/clixon-master/example/ietf-dpdk\@2015-05-06.yang

#Generate cc file from generated protobuf using google's protoc
protoc -I=$PROJECT_SOURCE/generated_files --cpp_out=$PROJECT_SOURCE/generated_files $PROJECT_SOURCE/generated_files/ietf-dpdk\@2015-05-06.proto 


#TESTING 
protoc -I=$PROJECT_SOURCE/generated_files --cpp_out=$PROJECT_SOURCE/generated_files $PROJECT_SOURCE/generated_files/message.proto 

#Compiling CLIENT and SERVER testing

#compile client
cd $PROJECT_SOURCE/ipc
#g++ -std=gnu++11 -o client -I$PROJECT_SOURCE/generated_files proto_client.cpp $PROJECT_SOURCE/generated_files/message.pb.cc -lrt -lprotobuf -lpthread

#g++ -std=gnu++11 -o server -I$PROJECT_SOURCE/generated_files proto_server.cpp $PROJECT_SOURCE/generated_files/message.pb.cc -lrt -lprotobuf -lpthread


#cd $PROJECT_SOURCE/3rdparty/enet-1.3.13/ASHOK

cd $PROJECT_SOURCE/ipc
g++ -std=gnu++11 -o client -I$PROJECT_SOURCE/generated_files Process.cpp ipc_client.cpp $PROJECT_SOURCE/generated_files/message.pb.cc $PROJECT_SOURCE/generated_files/ietf-dpdk@2015-05-06.pb.cc -lrt -lprotobuf -lpthread -lenet

g++ -std=gnu++11 -o server -I$PROJECT_SOURCE/generated_files Process.cpp main.cpp $PROJECT_SOURCE/generated_files/message.pb.cc $PROJECT_SOURCE/generated_files/ietf-dpdk@2015-05-06.pb.cc -lrt -lprotobuf -lpthread -lenet
#make
#make install
