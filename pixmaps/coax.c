/* $Id: eps2c,v 1.3 2008/11/29 20:42:45 dan Exp $ */

/* ********* Automatically Generated.  Do not edit! ******** */
/* *********         Created with eps2c            ******** */

#include <stdio.h>


void coax_eps(FILE *fp)
{
fprintf(fp,"%% We are currently where the top center of the figure should be.\n");
fprintf(fp,"%% First figure out where the text will be when we continue\n");
fprintf(fp,"%% after the figure\n");
fprintf(fp,"%%\n");
fprintf(fp,"currentpoint 685 546 sub sub\n");
fprintf(fp,"gsave\n");
fprintf(fp,"currentpoint pop 121 307 add 2 div sub\n");
fprintf(fp,"currentpoint exch pop 685 sub \n");
fprintf(fp,"translate\n");
fprintf(fp,"%%\n");
fprintf(fp,"%%include the EPS file\n");
fprintf(fp,"%%\n");
fprintf(fp,"BEGINEPSFILE\n");
fprintf(fp,"\n");

fprintf(fp,"%%!PS-Adobe-3.0 EPSF-3.0\n");
fprintf(fp,"%%%%BoundingBox: 121 546 307 685\n");
fprintf(fp,"%%%%Title: coax\n");
fprintf(fp,"%%%%CreationDate: Sat Feb 28 22:32:25 2009\n");
fprintf(fp,"%%%%Creator: Tgif-4.1.45 written by William Chia-Wei Cheng (bill.cheng@acm.org)\n");
fprintf(fp,"%%%%ProducedBy: (unknown)\n");
fprintf(fp,"%%%%Pages: 1\n");
fprintf(fp,"%%%%DocumentFonts: (atend)\n");
fprintf(fp,"%%%%EndComments\n");
fprintf(fp,"%%%%BeginProlog\n");
fprintf(fp,"\n");
fprintf(fp,"/tgifdict 55 dict def\n");
fprintf(fp,"tgifdict begin\n");
fprintf(fp,"\n");
fprintf(fp,"/tgifellipsedict 6 dict def\n");
fprintf(fp,"tgifellipsedict /mtrx matrix put\n");
fprintf(fp,"\n");
fprintf(fp,"/TGEL %% tgifellipse\n");
fprintf(fp," { tgifellipsedict begin\n");
fprintf(fp,"      /yrad exch def\n");
fprintf(fp,"      /xrad exch def\n");
fprintf(fp,"      /y exch def\n");
fprintf(fp,"      /x exch def\n");
fprintf(fp,"      /savematrix mtrx currentmatrix def\n");
fprintf(fp,"      x y translate\n");
fprintf(fp,"      xrad yrad scale\n");
fprintf(fp,"      0 0 1 0 360 arc\n");
fprintf(fp,"      savematrix setmatrix\n");
fprintf(fp,"   end\n");
fprintf(fp," } def\n");
fprintf(fp,"\n");
fprintf(fp,"/tgifarrowtipdict 8 dict def\n");
fprintf(fp,"tgifarrowtipdict /mtrx matrix put\n");
fprintf(fp,"\n");
fprintf(fp,"/TGAT %% tgifarrowtip\n");
fprintf(fp," { tgifarrowtipdict begin\n");
fprintf(fp,"      /dy exch def\n");
fprintf(fp,"      /dx exch def\n");
fprintf(fp,"      /h exch def\n");
fprintf(fp,"      /w exch def\n");
fprintf(fp,"      /y exch def\n");
fprintf(fp,"      /x exch def\n");
fprintf(fp,"      /savematrix mtrx currentmatrix def\n");
fprintf(fp,"      x y translate\n");
fprintf(fp,"      dy dx atan rotate\n");
fprintf(fp,"      0 0 moveto\n");
fprintf(fp,"      w neg h lineto\n");
fprintf(fp,"      w neg h neg lineto\n");
fprintf(fp,"      savematrix setmatrix\n");
fprintf(fp,"   end\n");
fprintf(fp," } def\n");
fprintf(fp,"\n");
fprintf(fp,"/TGMAX\n");
fprintf(fp," { exch dup 3 1 roll exch dup 3 1 roll gt { pop } { exch pop } ifelse\n");
fprintf(fp," } def\n");
fprintf(fp,"/TGMIN\n");
fprintf(fp," { exch dup 3 1 roll exch dup 3 1 roll lt { pop } { exch pop } ifelse\n");
fprintf(fp," } def\n");
fprintf(fp,"/TGSW { stringwidth pop } def\n");
fprintf(fp,"\n");
fprintf(fp,"/bd { bind def } bind def\n");
fprintf(fp,"\n");
fprintf(fp,"/GS { gsave } bd\n");
fprintf(fp,"/GR { grestore } bd\n");
fprintf(fp,"/NP { newpath } bd\n");
fprintf(fp,"/CP { closepath } bd\n");
fprintf(fp,"/CHP { charpath } bd\n");
fprintf(fp,"/CT { curveto } bd\n");
fprintf(fp,"/L { lineto } bd\n");
fprintf(fp,"/RL { rlineto } bd\n");
fprintf(fp,"/M { moveto } bd\n");
fprintf(fp,"/RM { rmoveto } bd\n");
fprintf(fp,"/S { stroke } bd\n");
fprintf(fp,"/F { fill } bd\n");
fprintf(fp,"/TR { translate } bd\n");
fprintf(fp,"/RO { rotate } bd\n");
fprintf(fp,"/SC { scale } bd\n");
fprintf(fp,"/MU { mul } bd\n");
fprintf(fp,"/DI { div } bd\n");
fprintf(fp,"/DU { dup } bd\n");
fprintf(fp,"/NE { neg } bd\n");
fprintf(fp,"/AD { add } bd\n");
fprintf(fp,"/SU { sub } bd\n");
fprintf(fp,"/PO { pop } bd\n");
fprintf(fp,"/EX { exch } bd\n");
fprintf(fp,"/CO { concat } bd\n");
fprintf(fp,"/CL { clip } bd\n");
fprintf(fp,"/EC { eoclip } bd\n");
fprintf(fp,"/EF { eofill } bd\n");
fprintf(fp,"/IM { image } bd\n");
fprintf(fp,"/IMM { imagemask } bd\n");
fprintf(fp,"/ARY { array } bd\n");
fprintf(fp,"/SG { setgray } bd\n");
fprintf(fp,"/RG { setrgbcolor } bd\n");
fprintf(fp,"/SD { setdash } bd\n");
fprintf(fp,"/W { setlinewidth } bd\n");
fprintf(fp,"/SM { setmiterlimit } bd\n");
fprintf(fp,"/SLC { setlinecap } bd\n");
fprintf(fp,"/SLJ { setlinejoin } bd\n");
fprintf(fp,"/SH { show } bd\n");
fprintf(fp,"/FF { findfont } bd\n");
fprintf(fp,"/MS { makefont setfont } bd\n");
fprintf(fp,"/AR { arcto 4 {pop} repeat } bd\n");
fprintf(fp,"/CURP { currentpoint } bd\n");
fprintf(fp,"/FLAT { flattenpath strokepath clip newpath } bd\n");
fprintf(fp,"/TGSM { tgiforigctm setmatrix } def\n");
fprintf(fp,"/TGRM { savematrix setmatrix } def\n");
fprintf(fp,"\n");
fprintf(fp,"end\n");
fprintf(fp,"\n");
fprintf(fp,"%%%%EndProlog\n");
fprintf(fp,"%%%%Page: 1 1\n");
fprintf(fp,"\n");
fprintf(fp,"\n");
fprintf(fp,"tgifdict begin\n");
fprintf(fp,"/tgifsavedpage save def\n");
fprintf(fp,"\n");
fprintf(fp,"1 SM\n");
fprintf(fp,"1 W\n");
fprintf(fp,"\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"\n");
fprintf(fp,"72 0 MU 72 11 MU TR\n");
fprintf(fp,"72 128 DI 100.000 MU 100 DI DU NE SC\n");
fprintf(fp,"\n");
fprintf(fp,"GS\n");
fprintf(fp,"\n");
fprintf(fp,"/tgiforigctm matrix currentmatrix def\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0.266 0.266 0.266 RG\n");
fprintf(fp,"NP 384 320 112 112 TGEL F\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 384 320 112 112 TGEL\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 352 M\n");
fprintf(fp,"      -32 0 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      -32 0 atan DU cos 8.000 MU 240 exch SU\n");
fprintf(fp,"      exch sin 8.000 MU 320 exch SU L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 352 8.000 3.000 0 32 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 352 8.000 3.000 0 32 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 320 8.000 3.000 0 -32 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 320 8.000 3.000 0 -32 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 218 324 M 229 324 L 229 347 L 218 347 L CP 1 SG F\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      224 343 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (c) TGSW \n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      2 DI NE 0 RM\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (c) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0.598 0.598 0.598 RG\n");
fprintf(fp,"NP 384 320 96 96 TGEL F\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 384 320 96 96 TGEL\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0.266 0.266 0.266 RG\n");
fprintf(fp,"NP 384 352 16 16 TGEL F\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 384 352 16 16 TGEL\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      384 320 M\n");
fprintf(fp,"      224 320 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      384 352 M\n");
fprintf(fp,"      224 352 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      432 336 M\n");
fprintf(fp,"      400 336 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      432 368 M\n");
fprintf(fp,"      400 368 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      416 368 M\n");
fprintf(fp,"      -32 0 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      -32 0 atan DU cos 8.000 MU 416 exch SU\n");
fprintf(fp,"      exch sin 8.000 MU 336 exch SU L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      416 368 8.000 3.000 0 32 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      416 368 8.000 3.000 0 32 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      416 336 8.000 3.000 0 -32 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      416 336 8.000 3.000 0 -32 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      432 359 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (2a) TGSW \n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      2 DI NE 0 RM\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (2a) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      544 224 M\n");
fprintf(fp,"      224 224 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      512 416 M\n");
fprintf(fp,"      -192 0 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      -192 0 atan DU cos 8.000 MU 512 exch SU\n");
fprintf(fp,"      exch sin 8.000 MU 224 exch SU L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      512 416 8.000 3.000 0 192 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      512 416 8.000 3.000 0 192 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      512 224 8.000 3.000 0 -192 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      512 224 8.000 3.000 0 -192 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 517 308 M 539 308 L 539 331 L 517 331 L CP 1 SG F\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      528 327 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (2b) TGSW \n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      2 DI NE 0 RM\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (2b) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      355 278 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (r,Tan) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      340 274 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Symbol FF [24 0 0 -24 0 0] MS\n");
fprintf(fp,"            (e) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      402 279 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Symbol FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (d) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      544 416 M\n");
fprintf(fp,"      384 416 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      384 208 M\n");
fprintf(fp,"      224 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 240 M\n");
fprintf(fp,"      -16 0 atan DU cos 8.000 MU 240 exch SU\n");
fprintf(fp,"      exch sin 8.000 MU 224 exch SU L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 224 8.000 3.000 0 -16 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 224 8.000 3.000 0 -16 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 236 244 M 243 244 L 243 267 L 236 267 L CP 1 SG F\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      240 263 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (t) TGSW \n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      2 DI NE 0 RM\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (t) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 192 M\n");
fprintf(fp,"      16 0 atan DU cos 8.000 MU 240 exch SU\n");
fprintf(fp,"      exch sin 8.000 MU 208 exch SU L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 208 8.000 3.000 0 16 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 208 8.000 3.000 0 16 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 384 320 112 112 TGEL\n");
fprintf(fp,"      4 W\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 384 320 96 96 TGEL\n");
fprintf(fp,"      4 W\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 384 352 16 16 TGEL\n");
fprintf(fp,"      4 W\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"GR\n");
fprintf(fp,"tgifsavedpage restore\n");
fprintf(fp,"end\n");
fprintf(fp,"showpage\n");
fprintf(fp,"\n");
fprintf(fp,"%%%%Trailer\n");
fprintf(fp,"%%MatchingCreationDate: Sat Feb 28 22:32:25 2009\n");
fprintf(fp,"%%%%DocumentFonts: Symbol\n");
fprintf(fp,"%%%%+ Helvetica\n");
fprintf(fp,"%%%%EOF\n");
fprintf(fp,"\n");
fprintf(fp,"ENDEPSFILE\n");
fprintf(fp,"grestore\n");
fprintf(fp,"moveto\n");

}
/* *********        End of Generated Code           ******** */

