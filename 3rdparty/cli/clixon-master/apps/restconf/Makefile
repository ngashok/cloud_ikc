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

srcdir  	= .
top_srcdir  	= ../..
CC		= gcc
CFLAGS  	= -O2 -Wall 
INSTALLFLAGS  	= -s 
LDFLAGS 	= 

prefix 		= /usr/local
datarootdir	= ${prefix}/share
exec_prefix 	= ${prefix}
bindir 		= ${exec_prefix}/bin
libdir		= ${exec_prefix}/lib
mandir		= ${datarootdir}/man
libexecdir	= ${exec_prefix}/libexec
wwwdir  	= /www-data
localstatedir	= ${prefix}/var
sysconfdir	= ${prefix}/etc
includedir	= ${prefix}/include
HOST_VENDOR     = unknown

SH_SUFFIX	= .so
CLIXON_MAJOR    = 3
CLIXON_MINOR    = 6

# Use this clixon lib for linking
CLIXON_LIB	= libclixon.so.$(CLIXON_MAJOR).$(CLIXON_MINOR)

# For dependency
LIBDEPS		= $(top_srcdir)/lib/src/$(CLIXON_LIB) 

LIBS    	= -L$(top_srcdir)/lib/src -ldl -lnsl -lcrypt -lfcgi -lcligen -lm  -l:$(CLIXON_LIB)

CPPFLAGS  	= -DHAVE_CONFIG_H  -fPIC

INCLUDES	= -I. -I$(top_srcdir)/lib/src -I$(top_srcdir)/lib -I$(top_srcdir)/include -I$(top_srcdir) 

# Name of application
APPL	  = clixon_restconf

# Not accessible from plugin
APPSRC    = restconf_main.c
APPSRC   += restconf_methods.c
APPOBJ    = $(APPSRC:.c=.o)

# Accessible from plugin
LIBSRC    = restconf_lib.c
LIBOBJ    = $(LIBSRC:.c=.o)

# Name of lib
MYNAME	  = clixon_restconf
MYLIBLINK = lib$(MYNAME)$(SH_SUFFIX)
MYLIB     = $(MYLIBLINK).$(CLIXON_MAJOR).$(CLIXON_MINOR)
MYLIBSO   = $(MYLIBLINK).$(CLIXON_MAJOR)

all:	 $(MYLIB) $(APPL)

clean:
	rm -f $(LIBOBJ) *.core $(APPL) $(APPOBJ) $(MYLIB) $(MYLIBSO) $(MYLIBLINK)

distclean: clean
	rm -f Makefile *~ .depend

# Put demon in bin 
# Put other executables in libexec/
# Also create a libexec/ directory for writeable/temporary files.
# Put config file in etc/
install:	install-lib $(APPL)
	install -d -m 0755 $(DESTDIR)$(wwwdir)
	install -m 0755 $(INSTALLFLAGS) $(APPL) $(DESTDIR)$(wwwdir)

install-lib: $(MYLIB)
	install -d -m 0755 $(DESTDIR)$(libdir)
	install -m 0644 $(INSTALLFLAGS) $(MYLIB) $(DESTDIR)$(libdir)
	ln -sf $(MYLIB) $(DESTDIR)$(libdir)/$(MYLIBSO)     # -l:libclixon_restconf.so.2
	ln -sf $(MYLIBSO) $(DESTDIR)$(libdir)/$(MYLIBLINK) # -l:libclixon_restconf.so

install-include:	clixon_restconf.h
	install -d -m 0755 $(DESTDIR)$(includedir)/clixon
	install -m 0644 $^ $(DESTDIR)$(includedir)/clixon

uninstall:
	rm -f $(DESTDIR)$(wwwdir)/$(APPL)
	rm -f $(DESTDIR)$(libdir)/$(MYLIBLINK)*

.SUFFIXES:
.SUFFIXES: .c .o

.c.o:
	$(CC) $(INCLUDES) -D__PROGRAM__=\"$(APPL)\" $(CPPFLAGS) $(CFLAGS) -c $<

$(APPL) : $(APPOBJ) $(MYLIBLINK) $(LIBDEPS)
	$(CC) $(LDFLAGS) $(APPOBJ) -L. $(MYLIB) $(LIBS) -o $@

$(MYLIB) : $(LIBOBJ)
ifeq ($(HOST_VENDOR),apple)
	$(CC) $(LDFLAGS) -shared -undefined dynamic_lookup -o $@ $(LIBOBJ) $(LIBS)
else
	$(CC) $(LDFLAGS) -shared -Wl,-soname,$(MYLIBSO) -o $@ $(LIBOBJ) $(LIBS) -Wl,-soname=$(MYLIBSO)
endif

# link-name is needed for application linking, eg for clixon_cli and clixon_config
$(MYLIBLINK) : $(MYLIB)

TAGS:
	find . -name '*.[chyl]' -print | etags -

depend:
	$(CC) $(DEPENDFLAGS) -DHAVE_CONFIG_H $(INCLUDES) $(CFLAGS) -MM $(LIBSRC) $(APPSRC) > .depend

#include .depend

