#!/bin/bash
PROJECT_SOURCE=/home/ngashok/Projects/cloud_ikc

#build 3d party
#build cligen-master
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

cd $PROJECT_SOURCE/3rdparty/google_perftool/gperftools-master/
#make
#make install
