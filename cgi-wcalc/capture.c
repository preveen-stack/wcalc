/* $Id: capture.c,v 1.3 2002/05/10 22:52:26 dan Exp $ */

#include "cgic.h"

#ifdef DMALLOC
#include <dmalloc.h>
#endif

int cgiMain() {
	cgiWriteEnvironment("/tmp/capcgi.dat");
	cgiHeaderContentType("text/html");
	fprintf(cgiOut, "<title>Captured</title>\n");
	fprintf(cgiOut, "<h1>Captured</h1>\n");
	fprintf(cgiOut, "Your form submission was captured for use in\n");
	fprintf(cgiOut, "debugging CGI code.\n");
	return 0;
}

