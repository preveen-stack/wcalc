## -*- makefile -*-
## $Id: Makefile.am,v 1.18 2009/01/12 03:47:49 dan Exp $
##

## Copyright (C) 2002, 2004, 2005 Dan McMahill
## All rights reserved.
##
## 
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; version 2 of the License.
## 
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
## 
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
## 

# to find the mex source files
vpath %.c $(top_srcdir)/sci-wcalc
vpath %.xml $(top_srcdir)/sci-wcalc

# list of all the mex files
include $(top_srcdir)/sci-wcalc/mex.mk

# the 'mex' command to compile the mex files
MEX=	@OCTMEX@

# the suffix for the compiled mex file
MEXSFX=	@OCT_MEX_EXEEXT@

octfiledir=	${libexecdir}/@MYSITEOCT@/${PACKAGE}-${VERSION}
fcnfiledir=	${libexecdir}/@MYSITEOCTM@/${PACKAGE}-${VERSION}
octfile_DATA=	${MEX_FILES}

# octave embeds the help information in the .oct file so the .m
# files are not needed
fcnfile_DATA=	${MEX_MANS}

noinst_SCRIPTS=		runoctave

MEX_FILES=	${MEX_SRCS:.c=${MEXSFX}}
MEX_MANS=	${MEX_SRCS:.c=.m}
MEX_TMP_CXX_FILES=	${addprefix mex_,${MEX_SRCS:.c=.cc}}
MEX_TMP_OBJ_FILES=	${MEX_TMP_CXX_FILES:.cc=.o}

AM_LDFLAGS=	${DMALLOC_LIBS} ${EFENCE_LIBS} @WCALC_LIBS@

# various MEX flags
MEXLDFLAGS=	@WCALC_OCTLIBS@ ${DMALLOC_LIBS} ${EFENCE_LIBS}
MEXINCLUDES=	-I$(top_srcdir) -I$(top_srcdir)/include @WCALC_CFLAGS@


all-local:	${MEX_FILES} runoctave ${MEX_MANS} octaverc

CLEANFILES=	alert.o ${MEX_FILES} runoctave ${MEX_MANS} ${MEX_TMP_CXX_FILES} \
		${MEX_TMP_OBJ_FILES} octaverc

runoctave:	$(srcdir)/runoctave.in
	sed "s;@BUILDDIR@;`pwd`;g" $(srcdir)/runoctave.in > $@
	chmod 755 $@


EXTRA_DIST=	runoctave.in copyright.m alert.c ${MEX_MANS} octaverc.in

octaverc: $(srcdir)/octaverc.in
	sed \
		-e 's;@mysiteoct@;${octfiledir};g' \
		-e 's;@mysiteoctm@;${fcnfiledir};g' \
		-e 's;@siteoct@;${SITEOCT};g' \
		-e 's;@siteoctm@;${SITEOCTM};g' \
		$(srcdir)/octaverc.in > octaverc

# All the new suffix rules
SUFFIXES= .c ${MEXSFX} .m .cat .man .txt

%${MEXSFX} : %.c %.m
	$(MEX) $(MEXINCLUDES) $< $(srcdir)/alert.c $(MEXLDFLAGS)


TARGETPROGRAM=	octave
HTMLSUFFIX=		htm

include $(top_srcdir)/sci-wcalc/sciman.mk

