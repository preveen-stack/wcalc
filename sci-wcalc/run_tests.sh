#!/bin/sh
#
# $Id: run_tests.sh,v 1.1 2004/09/03 02:09:54 dan Exp $
#

SCILAB=${SCILAB:-scilab}
srcdir=${srcdir:-`pwd`}

HOME=$srcdir

${SCILAB} -nw -f ${srcdir}/wcalc_test.sce


