/* $Id: eps2c,v 1.3 2008/11/29 20:42:45 dan Exp $ */

/* ********* Automatically Generated.  Do not edit! ******** */
/* *********         Created with eps2c            ******** */

#include <stdio.h>


void coupled_microstrip_eps(FILE *fp)
{
fprintf(fp,"%% We are currently where the top center of the figure should be.\n");
fprintf(fp,"%% First figure out where the text will be when we continue\n");
fprintf(fp,"%% after the figure\n");
fprintf(fp,"%%\n");
fprintf(fp,"currentpoint 775 670 sub sub\n");
fprintf(fp,"gsave\n");
fprintf(fp,"currentpoint pop 101 314 add 2 div sub\n");
fprintf(fp,"currentpoint exch pop 775 sub \n");
fprintf(fp,"translate\n");
fprintf(fp,"%%\n");
fprintf(fp,"%%include the EPS file\n");
fprintf(fp,"%%\n");
fprintf(fp,"BEGINEPSFILE\n");
fprintf(fp,"\n");

fprintf(fp,"%%!PS-Adobe-3.0 EPSF-3.0\n");
fprintf(fp,"%%%%BoundingBox: 101 670 314 775\n");
fprintf(fp,"%%%%Title: coupled_microstrip\n");
fprintf(fp,"%%%%CreationDate: Sat Feb 28 22:32:25 2009\n");
fprintf(fp,"%%%%Creator: Tgif-4.1.45 written by William Chia-Wei Cheng (bill.cheng@acm.org)\n");
fprintf(fp,"%%%%ProducedBy: (unknown)\n");
fprintf(fp,"%%%%Pages: 1\n");
fprintf(fp,"%%%%DocumentFonts: (atend)\n");
fprintf(fp,"%%%%EndComments\n");
fprintf(fp,"%%%%BeginProlog\n");
fprintf(fp,"\n");
fprintf(fp,"/tgifdict 53 dict def\n");
fprintf(fp,"tgifdict begin\n");
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
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      192 128 M\n");
fprintf(fp,"      448 128 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      192 192 M\n");
fprintf(fp,"      448 192 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      448 128 M\n");
fprintf(fp,"      544 64 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      368 128 M\n");
fprintf(fp,"      472 64 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 112 M\n");
fprintf(fp,"      344 48 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      480 64 M\n");
fprintf(fp,"      552 64 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% BOX\n");
fprintf(fp,"0.266 0.266 0.266 RG\n");
fprintf(fp,"NP 184 192 M 448 192 L 448 208 L 184 208 L CP F\n");
fprintf(fp,"GS\n");
fprintf(fp,"   10 SM\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 184 192 M 448 192 L 448 208 L 184 208 L CP\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0.266 0.266 0.266 RG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   448 192 M\n");
fprintf(fp,"   544 128 L\n");
fprintf(fp,"   544 144 L\n");
fprintf(fp,"   448 208 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"   EF\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0.598 0.598 0.598 RG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   184 128 M\n");
fprintf(fp,"   184 192 L\n");
fprintf(fp,"   448 192 L\n");
fprintf(fp,"   544 128 L\n");
fprintf(fp,"   544 64 L\n");
fprintf(fp,"   448 128 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"   EF\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      448 128 M\n");
fprintf(fp,"      448 192 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0.598 0.598 0.598 RG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   184 128 M\n");
fprintf(fp,"   280 64 L\n");
fprintf(fp,"   544 64 L\n");
fprintf(fp,"   448 128 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"   EF\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      200 128 M\n");
fprintf(fp,"      64 0 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      64 0 atan DU cos 8.000 MU 200 exch SU\n");
fprintf(fp,"      exch sin 8.000 MU 192 exch SU L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      200 128 8.000 3.000 0 -64 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      200 128 8.000 3.000 0 -64 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      200 192 8.000 3.000 0 64 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      200 192 8.000 3.000 0 64 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 144 M\n");
fprintf(fp,"      0 48 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      0 48 atan DU cos 8.000 MU 288 exch SU\n");
fprintf(fp,"      exch sin 8.000 MU 144 exch SU L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 144 8.000 3.000 -48 0 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 144 8.000 3.000 -48 0 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      288 144 8.000 3.000 48 0 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      288 144 8.000 3.000 48 0 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      224 112 M\n");
fprintf(fp,"      -64 104 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      -64 104 atan DU cos 8.000 MU 328 exch SU\n");
fprintf(fp,"      exch sin 8.000 MU 48 exch SU L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      224 112 8.000 3.000 -104 64 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      224 112 8.000 3.000 -104 64 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      328 48 8.000 3.000 104 -64 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      328 48 8.000 3.000 104 -64 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      336 48 M\n");
fprintf(fp,"      312 48 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      232 112 M\n");
fprintf(fp,"      216 112 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      288 136 M\n");
fprintf(fp,"      288 152 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      240 136 M\n");
fprintf(fp,"      240 152 L\n");
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
fprintf(fp,"      252 170 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (W) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      208 170 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (H) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      288 58 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (L) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      496 48 M\n");
fprintf(fp,"      -16 0 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      496 32 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      496 48 8.000 3.000 0 16 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      496 48 8.000 3.000 0 16 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      496 64 M\n");
fprintf(fp,"      16 0 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      496 80 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      496 64 8.000 3.000 0 -16 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      496 64 8.000 3.000 0 -16 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      488 48 M\n");
fprintf(fp,"      504 48 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 511 39 M 556 39 L 556 62 L 511 62 L CP 1 SG F\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      512 58 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (Tmet) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      472 200 M\n");
fprintf(fp,"      0 24 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      496 200 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      472 200 8.000 3.000 -24 0 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      472 200 8.000 3.000 -24 0 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP 503 191 M 547 191 L 547 214 L 503 214 L CP 1 SG F\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      504 210 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (GND) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      387 182 M\n");
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
fprintf(fp,"      434 183 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Symbol FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (d) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      372 178 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Symbol FF [24 0 0 -24 0 0] MS\n");
fprintf(fp,"            (e) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      328 144 M\n");
fprintf(fp,"      0 48 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      0 48 atan DU cos 8.000 MU 376 exch SU\n");
fprintf(fp,"      exch sin 8.000 MU 144 exch SU L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      328 144 8.000 3.000 -48 0 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      328 144 8.000 3.000 -48 0 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      376 144 8.000 3.000 48 0 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      376 144 8.000 3.000 48 0 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      376 136 M\n");
fprintf(fp,"      376 152 L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      328 136 M\n");
fprintf(fp,"      328 152 L\n");
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
fprintf(fp,"      340 170 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (W) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLY/OPEN-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      288 144 M\n");
fprintf(fp,"      0 40 atan DU cos 8.000 MU exch sin 8.000 MU RM\n");
fprintf(fp,"      0 40 atan DU cos 8.000 MU 328 exch SU\n");
fprintf(fp,"      exch sin 8.000 MU 144 exch SU L\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   1 W\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      288 144 8.000 3.000 -40 0 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      288 144 8.000 3.000 -40 0 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   TGSM\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      328 144 8.000 3.000 40 0 TGAT\n");
fprintf(fp,"   1 SG CP F\n");
fprintf(fp,"   0 SG\n");
fprintf(fp,"   NP\n");
fprintf(fp,"      328 144 8.000 3.000 40 0 TGAT\n");
fprintf(fp,"   CP F\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      300 170 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (S) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   184 128 M\n");
fprintf(fp,"   184 192 L\n");
fprintf(fp,"   448 192 L\n");
fprintf(fp,"   544 128 L\n");
fprintf(fp,"   544 64 L\n");
fprintf(fp,"   448 128 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   184 128 M\n");
fprintf(fp,"   280 64 L\n");
fprintf(fp,"   544 64 L\n");
fprintf(fp,"   448 128 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% BOX\n");
fprintf(fp,"0.266 0.266 0.266 RG\n");
fprintf(fp,"NP 240 112 M 288 112 L 288 128 L 240 128 L CP F\n");
fprintf(fp,"GS\n");
fprintf(fp,"   10 SM\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 240 112 M 288 112 L 288 128 L 240 128 L CP\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0.266 0.266 0.266 RG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   288 112 M\n");
fprintf(fp,"   288 128 L\n");
fprintf(fp,"   392 64 L\n");
fprintf(fp,"   392 48 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"   EF\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0.266 0.266 0.266 RG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   288 112 M\n");
fprintf(fp,"   392 48 L\n");
fprintf(fp,"   344 48 L\n");
fprintf(fp,"   240 112 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"   EF\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% BOX\n");
fprintf(fp,"0.266 0.266 0.266 RG\n");
fprintf(fp,"NP 328 112 M 376 112 L 376 128 L 328 128 L CP F\n");
fprintf(fp,"GS\n");
fprintf(fp,"   10 SM\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 328 112 M 376 112 L 376 128 L 328 128 L CP\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0.266 0.266 0.266 RG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   376 112 M\n");
fprintf(fp,"   376 128 L\n");
fprintf(fp,"   480 64 L\n");
fprintf(fp,"   480 48 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"   EF\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0.266 0.266 0.266 RG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   376 112 M\n");
fprintf(fp,"   480 48 L\n");
fprintf(fp,"   432 48 L\n");
fprintf(fp,"   328 112 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"   EF\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% BOX\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   10 SM\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 240 112 M 288 112 L 288 128 L 240 128 L CP\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   288 112 M\n");
fprintf(fp,"   288 128 L\n");
fprintf(fp,"   392 64 L\n");
fprintf(fp,"   392 48 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   288 112 M\n");
fprintf(fp,"   392 48 L\n");
fprintf(fp,"   344 48 L\n");
fprintf(fp,"   240 112 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% BOX\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   10 SM\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 328 112 M 376 112 L 376 128 L 328 128 L CP\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   376 112 M\n");
fprintf(fp,"   376 128 L\n");
fprintf(fp,"   480 64 L\n");
fprintf(fp,"   480 48 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   376 112 M\n");
fprintf(fp,"   480 48 L\n");
fprintf(fp,"   432 48 L\n");
fprintf(fp,"   328 112 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% BOX\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"GS\n");
fprintf(fp,"   10 SM\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      NP 184 192 M 448 192 L 448 208 L 184 208 L CP\n");
fprintf(fp,"      S\n");
fprintf(fp,"   GR\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% POLYGON/CLOSED-SPLINE\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"NP\n");
fprintf(fp,"   448 192 M\n");
fprintf(fp,"   544 128 L\n");
fprintf(fp,"   544 144 L\n");
fprintf(fp,"   448 208 L\n");
fprintf(fp,"CP\n");
fprintf(fp,"GS\n");
fprintf(fp,"GR\n");
fprintf(fp,"GS\n");
fprintf(fp,"   S\n");
fprintf(fp,"GR\n");
fprintf(fp,"\n");
fprintf(fp,"%% TEXT\n");
fprintf(fp,"NP\n");
fprintf(fp,"0 SG\n");
fprintf(fp,"   GS\n");
fprintf(fp,"      1 W\n");
fprintf(fp,"      387 182 M\n");
fprintf(fp,"      GS\n");
fprintf(fp,"            0 SG\n");
fprintf(fp,"            /Helvetica FF [20 0 0 -20 0 0] MS\n");
fprintf(fp,"            (r,Tan) SH\n");
fprintf(fp,"      GR\n");
fprintf(fp,"   GR\n");
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

