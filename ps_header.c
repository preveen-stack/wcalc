/* $Id: ps_header.c,v 1.6 2009/02/07 04:10:51 dan Exp $ */

fprintf(fp,"%%!PS-Adobe-3.0\n");
fprintf(fp,"%%%%Creator: Wcalc\n");
fprintf(fp,"%%%%BoundingBox: 0 0 %g %g\n",
	rint(72*global_print_config->paperwidth),
	rint(72*global_print_config->paperheight));
fprintf(fp,"%%%%PageBoundingBox: 0 0 %g %g\n",
	rint(72*global_print_config->paperwidth),
	rint(72*global_print_config->paperheight));
fprintf(fp,"%%%%EndComments\n");
fprintf(fp,"%%%%BeginProlog\n");
fprintf(fp,"%%\n");
fprintf(fp,"%% Select the font\n");
fprintf(fp,"/currfont /Times-Roman findfont def\n");
fprintf(fp,"%% \n");
fprintf(fp,"%% Set font size\n");
fprintf(fp,"/fsize %g def\n",global_print_config->fontsize);
fprintf(fp,"currfont fsize scalefont setfont\n");
fprintf(fp,"\n");
fprintf(fp,"%%\n");
fprintf(fp,"%% Set line spacing\n");
fprintf(fp,"%%\n");
fprintf(fp,"/linespace 1.0 def\n");
fprintf(fp,"%%\n");
fprintf(fp,"%% inches to postscript unit conversion\n");
fprintf(fp,"/inch {72 mul} def\n");
fprintf(fp,"%%\n");
fprintf(fp,"\n");
fprintf(fp,"%%\n");
fprintf(fp,"/leftcol %g inch def\n",global_print_config->leftmargin);
fprintf(fp,"\n");
fprintf(fp,"%%\n");
fprintf(fp,"%% wrapper around eps files inclusion\n");
fprintf(fp,"%%\n");
fprintf(fp,"/BEGINEPSFILE {%%def\n");
fprintf(fp,"  /EPSFsave save def\n");
fprintf(fp,"  0 setgray 0 setlinecap 1 setlinewidth 0 setlinejoin \n");
fprintf(fp,"  10 setmiterlimit [] 0 setdash\n");
fprintf(fp,"  newpath\n");
fprintf(fp,"  /showpage {} def\n");
fprintf(fp,"} bind def\n");
fprintf(fp,"/ENDEPSFILE {%%def\n");
fprintf(fp,"  EPSFsave restore\n");
fprintf(fp,"} bind def\n");
fprintf(fp,"\n");
fprintf(fp,"%%\n");
fprintf(fp,"%% Various useful functions for printing\n");
fprintf(fp,"%% text\n");
fprintf(fp,"\n");
fprintf(fp,"/centercentershow {\n");
fprintf(fp,"dup\n");
fprintf(fp,"stringwidth\n");
fprintf(fp,"pop\n");
fprintf(fp,"2 div neg  fsize 2 div neg rmoveto\n");
fprintf(fp,"show\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"/rightcentershow {\n");
fprintf(fp,"dup\n");
fprintf(fp,"stringwidth\n");
fprintf(fp,"pop\n");
fprintf(fp,"neg  fsize 2 div neg rmoveto\n");
fprintf(fp,"show\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"%% puts the centertop of the text at the current point\n");
fprintf(fp,"/centertopshow {\n");
fprintf(fp,"dup\n");
fprintf(fp,"stringwidth\n");
fprintf(fp,"pop\n");
fprintf(fp,"2 div neg fsize  neg rmoveto\n");
fprintf(fp,"show\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"%% puts the centerbot of the text at the current point\n");
fprintf(fp,"/centerbotshow {\n");
fprintf(fp,"dup\n");
fprintf(fp,"stringwidth\n");
fprintf(fp,"pop\n");
fprintf(fp,"2 div neg fsize  rmoveto\n");
fprintf(fp,"show\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"%% draw an open box.stack: centerx,centery,width,height\n");
fprintf(fp,"%%/boxcenter {\n");
fprintf(fp,"%%  newpath moveto\n");
fprintf(fp,"%%  $printwidth  inch  0 inch rlineto\n");
fprintf(fp,"%%  0 inch -$labelheight inch rlineto\n");
fprintf(fp,"%%  -$printwidth  inch  0 inch rlineto\n");
fprintf(fp,"%%  0 inch  $labelheight inch rlineto\n");
fprintf(fp,"%%  closepath\n");
fprintf(fp,"%%  1 setlinewidth\n");
fprintf(fp,"%%  stroke\n");
fprintf(fp,"%%} def\n");
fprintf(fp,"\n");
fprintf(fp,"%% newline command\n");
fprintf(fp,"/newline {\n");
fprintf(fp,"  currentpoint\n");
fprintf(fp,"  fsize linespace mul sub \n");
fprintf(fp,"  exch pop leftcol exch\n");
fprintf(fp,"  moveto\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"/newlineclose {\n");
fprintf(fp,"  currentpoint\n");
fprintf(fp,"  fsize 0.9 mul sub \n");
fprintf(fp,"  exch pop leftcol exch\n");
fprintf(fp,"  moveto\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"%% newlinecenter command\n");
fprintf(fp,"/newlinecenter {\n");
fprintf(fp,"  currentpoint\n");
fprintf(fp,"  fsize linespace mul sub \n");
fprintf(fp,"  exch pop %g 2 div inch exch\n",global_print_config->paperwidth);
fprintf(fp,"  moveto\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"\n");
fprintf(fp,"/tab1{\n");
fprintf(fp,"    currentpoint exch pop \n");
fprintf(fp,"    %g inch leftcol add exch \n",global_print_config->tab1);
fprintf(fp,"    moveto\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"/tab2{\n");
fprintf(fp,"    currentpoint exch pop \n");
fprintf(fp,"    %g inch leftcol add exch \n",global_print_config->tab2);
fprintf(fp,"    moveto\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"/tab3{\n");
fprintf(fp,"    currentpoint exch pop \n");
fprintf(fp,"    %g inch leftcol add exch \n",global_print_config->tab3);
fprintf(fp,"    moveto\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"/tab4{\n");
fprintf(fp,"    currentpoint exch pop \n");
fprintf(fp,"    %g inch leftcol add exch \n",global_print_config->tab4);
fprintf(fp,"    moveto\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"\n");
fprintf(fp,"/subshow {\n");
fprintf(fp,"  currfont fsize 0.7 mul scalefont setfont\n");
fprintf(fp,"  fsize 0.25 mul neg 0 exch rmoveto\n");
fprintf(fp,"  show\n");
fprintf(fp,"  fsize 0.25 mul 0 exch rmoveto\n");
fprintf(fp,"  currfont fsize scalefont setfont\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"/subsymbolshow {\n");
fprintf(fp,"  /Symbol findfont fsize 0.7 mul scalefont setfont\n");
fprintf(fp,"  fsize 0.25 mul neg 0 exch rmoveto\n");
fprintf(fp,"  show\n");
fprintf(fp,"  fsize 0.25 mul 0 exch rmoveto\n");
fprintf(fp,"  currfont fsize scalefont setfont\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"/symbolshow {\n");
fprintf(fp,"  /Symbol findfont fsize scalefont setfont\n");
fprintf(fp,"  show\n");
fprintf(fp,"  currfont fsize scalefont setfont\n");
fprintf(fp,"} def\n");
fprintf(fp,"\n");
fprintf(fp,"%%%%EndProlog\n");
fprintf(fp,"%%%%BeginSetup\n");
fprintf(fp,"%%%%EndSetup\n");
fprintf(fp,"%%%%Page: 1 1\n");
fprintf(fp,"\n");
fprintf(fp,"%%\n");
fprintf(fp,"%% The header on the page\n");
fprintf(fp,"%%\n");
fprintf(fp,"%g 2 div inch %g %g sub inch moveto\n",
	global_print_config->paperwidth,
	global_print_config->paperheight,
	global_print_config->topmargin);
fprintf(fp,"%%\n");
fprintf(fp,"%% larger font\n");
fprintf(fp,"currfont fsize 2.0 mul scalefont setfont\n");
fprintf(fp,"(Wcalc:  Version-%s) centertopshow newlinecenter\n",VER);
fprintf(fp,"currfont fsize 1.2 mul scalefont setfont\n");
fprintf(fp,"(%s, %s) centertopshow newlinecenter\n",wcalc->model_name,wcalc->model_version);
fprintf(fp,"newlinecenter\n");
fprintf(fp,"currfont fsize scalefont setfont\n");
fprintf(fp,"\n");
fprintf(fp,"%%  \n");
fprintf(fp,"%% The figure of the structure being analyzed\n");
fprintf(fp,"%%\n");
fprintf(fp,"\n");
fprintf(fp,"%%\n");



/* *********        End of Generated Code           ******** */

