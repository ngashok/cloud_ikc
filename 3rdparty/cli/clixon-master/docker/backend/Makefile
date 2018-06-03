#
# ***** BEGIN LICENSE BLOCK *****
# 
# Copyright (C) 2009-2018 Olof Hagsand and Benny Holmgren
#
# This file is part of CLIXON
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# Alternatively, the contents of this file may be used under the terms of
# the GNU General Public License Version 3 or later (the "GPL"),
# in which case the provisions of the GPL are applicable instead
# of those above. If you wish to allow use of your version of this file only
# under the terms of the GPL, and not to allow others to
# use your version of this file under the terms of Apache License version 2, 
# indicate your decision by deleting the provisions above and replace them with
# the notice and other provisions required by the GPL. If you do not delete
# the provisions above, a recipient may use your version of this file under
# the terms of any one of the Apache License version 2 or the GPL.
#
# ***** END LICENSE BLOCK *****
#

prefix 		= /usr/local
exec_prefix 	= ${prefix}
srcdir  	= .
top_srcdir  	= ../..
prefix 		= /usr/local
bindir 		= ${exec_prefix}/bin
sbindir 	= ${exec_prefix}/sbin
libdir		= ${exec_prefix}/lib
includedir	= ${prefix}/include
datarootdir	= ${prefix}/share
# You may consider changing this
image           = olofhagsand/clixon_backend

all:
	@echo "Run make docker to build docker image"
clean:

distclean: clean
	rm -f Makefile *~ .depend libcligen* libclixon* clixon_backend Dockerfile

# Kind of reverse install, could have copied from src dir,...
.PHONY: docker push
docker:	
	cp $(DESTDIR)$(libdir)/libcligen.so.3 .
	cp $(DESTDIR)$(libdir)/libclixon.so.3 .
	cp $(DESTDIR)$(libdir)/libclixon_backend.so.3 .
	cp $(DESTDIR)$(sbindir)/clixon_backend .
	sudo docker build -t $(image) .

push:	
	docker push $(image)


install:

uninstall: 

install-include:	

depend:
#	$(CC) $(DEPENDFLAGS) $(INCLUDES) $(CFLAGS) -MM $(SRC) > .depend

#include .depend

