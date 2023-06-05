/* $Id: eps2c,v 1.3 2008/11/29 20:42:45 dan Exp $ */

/* ********* Automatically Generated.  Do not edit! ******** */
/* *********         Created with eps2c            ******** */

#include <stdio.h>


void microstrip_model_eps(FILE *fp)
{
fprintf(fp,"%% We are currently where the top center of the figure should be.\n");
fprintf(fp,"%% First figure out where the text will be when we continue\n");
fprintf(fp,"%% after the figure\n");
fprintf(fp,"%%\n");
fprintf(fp,"currentpoint 699 626 sub sub\n");
fprintf(fp,"gsave\n");
fprintf(fp,"currentpoint pop 91 255 add 2 div sub\n");
fprintf(fp,"currentpoint exch pop 699 sub \n");
fprintf(fp,"translate\n");
fprintf(fp,"%%\n");
fprintf(fp,"%%include the EPS file\n");
fprintf(fp,"%%\n");
fprintf(fp,"BEGINEPSFILE\n");
fprintf(fp,"\n");

fprintf(fp,"%%!PS-Adobe-3.0 EPSF-3.0\n");
fprintf(fp,"%%%%BoundingBox: 91 626 255 699\n");
fprintf(fp,"%%%%Title: microstrip_model\n");
fprintf(fp,"%%%%CreationDate: Sat Feb 28 22:32:26 2009\n");
fprintf(fp,"%%%%Creator: Tgif-4.1.45 written by William Chia-Wei Cheng (bill.cheng@acm.org)\n");
fprintf(fp,"%%%%ProducedBy: (unknown)\n");
fprintf(fp,"%%%%Pages: 1\n");
fprintf(fp,"%%%%DocumentFonts: (atend)\n");
fprintf(fp,"%%%%EndComments\n");
fprintf(fp,"%%%%BeginProlog\n");
fprintf(fp,"\n");
fprintf(fp,"/tgifdict 56 dict def\n");
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
fprintf(fp,"/tgifarcdict 8 dict def\n");
fprintf(fp,"tgifarcdict /mtrx matrix put\n");
fprintf(fp,"\n");
fprintf(fp,"/TGAN %% tgifarcn\n");
fprintf(fp," { tgifarcdict begin\n");
fprintf(fp,"      /endangle exch def\n");
fprintf(fp,"      /startangle exch def\n");
fprintf(fp,"      /yrad exch def\n");
fprintf(fp,"      /xrad exch def\n");
fprintf(fp,"      /y exch def\n");
fprintf(fp,"      /x exch def\n");
fprintf(fp,"      /savematrix mtrx currentmatrix def\n");
fprintf(fp,"      x y translate\n");
fprintf(fp,"      xrad yrad scale\n");
fprintf(fp,"      0 0 1 startangle endangle arc\n");
fprintf(fp,"      savematrix setmatrix\n");
fprintf(fp,"   end\n");
fprintf(fp," } def\n");
fprintf(fp,"\n");
fprintf(fp,"/TGAR %% tgifarc\n");
fprintf(fp," { tgifarcdict begin\n");
fprintf(fp,"      /endangle exch def\n");
fprintf(fp,"      /startangle exch def\n");
fprintf(fp,"      /yrad exch def\n");
fprintf(fp,"      /xrad exch def\n");
fprintf(fp,"      /y exch def\n");
fprintf(fp,"      /x exch def\n");
fprintf(fp,"      /savematrix mtrx currentmatrix def\n");
fprintf(fp,"      x y translate\n");
fprintf(fp,"      xrad yrad scale\n");
fprintf(fp,"      0 0 1 startangle endangle arcn\n");
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
fprintf(fp,"%% ARC\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP\n");
fprintf(fp,"         222 208 6 8 180 360 TGAN\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% ARC\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP\n");
fprintf(fp,"         230 208 6 8 180 360 TGAN\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% ARC\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP\n");
fprintf(fp,"         238 208 6 8 180 360 TGAN\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% ARC\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP\n");
fprintf(fp,"         246 208 6 8 180 360 TGAN\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% ARC\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP\n");
fprintf(fp,"         244 208 4 8 180 116 TGAR\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% ARC\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP\n");
fprintf(fp,"         240 208 4 8 0 63 TGAN\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% ARC\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP\n");
fprintf(fp,"         236 208 4 8 180 116 TGAR\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% ARC\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP\n");
fprintf(fp,"         232 208 4 8 0 63 TGAN\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% ARC\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP\n");
fprintf(fp,"         228 208 4 8 180 116 TGAR\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% ARC\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP\n");
fprintf(fp,"         224 208 4 8 0 63 TGAN\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      252 208 M\n");
fprintf(fp,"      256 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      216 208 M\n");
fprintf(fp,"      208 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      222 249 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      221 236 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      222 226 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      219 196 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      272 208 M\n");
fprintf(fp,"      284 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      308 208 M\n");
fprintf(fp,"      320 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   284 208 M\n");
fprintf(fp,"   286 216 L\n");
fprintf(fp,"   290 200 L\n");
fprintf(fp,"   294 216 L\n");
fprintf(fp,"   298 200 L\n");
fprintf(fp,"   302 216 L\n");
fprintf(fp,"   306 200 L\n");
fprintf(fp,"   308 208 L\n");
fprintf(fp,"CP 1 SG EF\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      284 208 M\n");
fprintf(fp,"      286 216 L\n");
fprintf(fp,"      290 200 L\n");
fprintf(fp,"      294 216 L\n");
fprintf(fp,"      298 200 L\n");
fprintf(fp,"      302 216 L\n");
fprintf(fp,"      306 200 L\n");
fprintf(fp,"      308 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      300 242 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            0\n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      2 DI NE 0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      296 258 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            0\n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      2 DI NE 0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      300 230 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            0\n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      2 DI NE 0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      296 194 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            0\n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      2 DI NE 0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      296 182 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            0\n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      2 DI NE 0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      352 232 M\n");
fprintf(fp,"      352 248 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      352 252 M\n");
fprintf(fp,"      352 264 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      344 248 M\n");
fprintf(fp,"      360 248 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      344 252 M\n");
fprintf(fp,"      360 252 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      340 256 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            0\n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      NE 0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      364 250 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      364 262 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      364 274 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      384 224 M\n");
fprintf(fp,"      384 236 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      384 260 M\n");
fprintf(fp,"      384 272 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   384 236 M\n");
fprintf(fp,"   376 238 L\n");
fprintf(fp,"   392 242 L\n");
fprintf(fp,"   376 246 L\n");
fprintf(fp,"   392 250 L\n");
fprintf(fp,"   376 254 L\n");
fprintf(fp,"   392 258 L\n");
fprintf(fp,"   384 260 L\n");
fprintf(fp,"CP 1 SG EF\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      384 236 M\n");
fprintf(fp,"      376 238 L\n");
fprintf(fp,"      392 242 L\n");
fprintf(fp,"      376 246 L\n");
fprintf(fp,"      392 250 L\n");
fprintf(fp,"      376 254 L\n");
fprintf(fp,"      392 258 L\n");
fprintf(fp,"      384 260 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      396 242 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      396 254 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      396 266 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      372 242 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            0\n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      NE 0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      372 258 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"        GS\n");
fprintf(fp,"        0\n");
fprintf(fp,"            0\n");
fprintf(fp,"        AD\n");
fprintf(fp,"        GR\n");
fprintf(fp,"      NE 0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      224 192 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (L) SH\n");
fprintf(fp,"          GS\n");
fprintf(fp,"            GS\n");
fprintf(fp,"              0 4 RM\n");
fprintf(fp,"              GS\n");
fprintf(fp,"                    0 SG\n");
fprintf(fp,"                    /Helvetica FF [12 0 0 -12 0 0] MS\n");
fprintf(fp,"                    (S) SH\n");
fprintf(fp,"              GR\n");
fprintf(fp,"            GR\n");
fprintf(fp,"          GR\n");
fprintf(fp,"            0\n");
fprintf(fp,"              0\n");
fprintf(fp,"                GS\n");
fprintf(fp,"                0\n");
fprintf(fp,"                    /Helvetica FF [12 0 0 -12 0 0] MS\n");
fprintf(fp,"                    (S) TGSW \n");
fprintf(fp,"                AD\n");
fprintf(fp,"                GR\n");
fprintf(fp,"              TGMAX\n");
fprintf(fp,"            TGMAX\n");
fprintf(fp,"          0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      288 192 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (R) SH\n");
fprintf(fp,"          GS\n");
fprintf(fp,"            GS\n");
fprintf(fp,"              0 4 RM\n");
fprintf(fp,"              GS\n");
fprintf(fp,"                    0 SG\n");
fprintf(fp,"                    /Helvetica FF [12 0 0 -12 0 0] MS\n");
fprintf(fp,"                    (S) SH\n");
fprintf(fp,"              GR\n");
fprintf(fp,"            GR\n");
fprintf(fp,"          GR\n");
fprintf(fp,"            0\n");
fprintf(fp,"              0\n");
fprintf(fp,"                GS\n");
fprintf(fp,"                0\n");
fprintf(fp,"                    /Helvetica FF [12 0 0 -12 0 0] MS\n");
fprintf(fp,"                    (S) TGSW \n");
fprintf(fp,"                AD\n");
fprintf(fp,"                GR\n");
fprintf(fp,"              TGMAX\n");
fprintf(fp,"            TGMAX\n");
fprintf(fp,"          0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      320 256 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (C) SH\n");
fprintf(fp,"          GS\n");
fprintf(fp,"            GS\n");
fprintf(fp,"              0 4 RM\n");
fprintf(fp,"              GS\n");
fprintf(fp,"                    0 SG\n");
fprintf(fp,"                    /Helvetica FF [12 0 0 -12 0 0] MS\n");
fprintf(fp,"                    (S) SH\n");
fprintf(fp,"              GR\n");
fprintf(fp,"            GR\n");
fprintf(fp,"          GR\n");
fprintf(fp,"            0\n");
fprintf(fp,"              0\n");
fprintf(fp,"                GS\n");
fprintf(fp,"                0\n");
fprintf(fp,"                    /Helvetica FF [12 0 0 -12 0 0] MS\n");
fprintf(fp,"                    (S) TGSW \n");
fprintf(fp,"                AD\n");
fprintf(fp,"                GR\n");
fprintf(fp,"              TGMAX\n");
fprintf(fp,"            TGMAX\n");
fprintf(fp,"          0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      400 256 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (G) SH\n");
fprintf(fp,"          GS\n");
fprintf(fp,"            GS\n");
fprintf(fp,"              0 4 RM\n");
fprintf(fp,"              GS\n");
fprintf(fp,"                    0 SG\n");
fprintf(fp,"                    /Helvetica FF [12 0 0 -12 0 0] MS\n");
fprintf(fp,"                    (S) SH\n");
fprintf(fp,"              GR\n");
fprintf(fp,"            GR\n");
fprintf(fp,"          GR\n");
fprintf(fp,"            0\n");
fprintf(fp,"              0\n");
fprintf(fp,"                GS\n");
fprintf(fp,"                0\n");
fprintf(fp,"                    /Helvetica FF [12 0 0 -12 0 0] MS\n");
fprintf(fp,"                    (S) TGSW \n");
fprintf(fp,"                AD\n");
fprintf(fp,"                GR\n");
fprintf(fp,"              TGMAX\n");
fprintf(fp,"            TGMAX\n");
fprintf(fp,"          0 RM\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      168 208 M\n");
fprintf(fp,"      208 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      256 208 M\n");
fprintf(fp,"      280 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      320 208 M\n");
fprintf(fp,"      448 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      448 288 M\n");
fprintf(fp,"      168 288 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      352 232 M\n");
fprintf(fp,"      352 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      352 264 M\n");
fprintf(fp,"      352 288 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      384 272 M\n");
fprintf(fp,"      384 288 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      384 224 M\n");
fprintf(fp,"      384 208 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 352 208 3 3 TGEL F\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 352 208 3 3 TGEL\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 384 208 3 3 TGEL F\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 384 208 3 3 TGEL\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 384 288 3 3 TGEL F\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 384 288 3 3 TGEL\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 352 288 3 3 TGEL F\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 352 288 3 3 TGEL\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 168 208 3 3 TGEL\n");
fprintf(fp,"CP 1 SG F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 168 208 3 3 TGEL\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 448 208 3 3 TGEL\n");
fprintf(fp,"CP 1 SG F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 448 208 3 3 TGEL\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 448 288 3 3 TGEL\n");
fprintf(fp,"CP 1 SG F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 448 288 3 3 TGEL\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% OVAL\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 168 288 3 3 TGEL\n");
fprintf(fp,"CP 1 SG F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 168 288 3 3 TGEL\n");
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
fprintf(fp,"%%MatchingCreationDate: Sat Feb 28 22:32:26 2009\n");
fprintf(fp,"%%%%DocumentFonts: Helvetica\n");
fprintf(fp,"%%%%EOF\n");
fprintf(fp,"\n");
fprintf(fp,"ENDEPSFILE\n");
fprintf(fp,"grestore\n");
fprintf(fp,"moveto\n");

}
/* *********        End of Generated Code           ******** */

