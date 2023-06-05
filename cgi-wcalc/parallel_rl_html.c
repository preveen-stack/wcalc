
/* ********* Automatically Generated.  Do not edit! ******** */
/* *********         Created with html2c            ******** */

fprintf(cgiOut,"<!-- $Id: parallel_rl.html,v 1.2 2009/02/12 01:32:39 dan Exp $ -->\n");
fprintf(cgiOut,"<!--\n");
fprintf(cgiOut," * Copyright (c) 2001, 2002, 2003, 2004, 2005, 2006 Dan McMahill\n");
fprintf(cgiOut," * All rights reserved.\n");
fprintf(cgiOut," *\n");
fprintf(cgiOut," * This program is free software; you can redistribute it and/or modify\n");
fprintf(cgiOut," * it under the terms of the GNU General Public License as published by\n");
fprintf(cgiOut," * the Free Software Foundation; version 2 of the License.\n");
fprintf(cgiOut," * \n");
fprintf(cgiOut," * This program is distributed in the hope that it will be useful,\n");
fprintf(cgiOut," * but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
fprintf(cgiOut," * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
fprintf(cgiOut," * GNU General Public License for more details.\n");
fprintf(cgiOut," * \n");
fprintf(cgiOut," * You should have received a copy of the GNU General Public License\n");
fprintf(cgiOut," * along with this program; if not, write to the Free Software\n");
fprintf(cgiOut," * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA\n");
fprintf(cgiOut," -->\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 3.2 Final//EN\">\n");
fprintf(cgiOut,"<HTML>\n");
fprintf(cgiOut,"<HEAD>\n");
fprintf(cgiOut,"<TITLE>Series/Parallel RL Network Conversion</TITLE>\n");
fprintf(cgiOut,"<!-- Created by: Dan McMahill, 2001/09/12 -->\n");
fprintf(cgiOut,"<LINK REV=\"made\" HREF=\"mailto:nospam_to_mcmahill@alum.mit.make_edu\">\n");
fprintf(cgiOut,"<link rel=\"shortcut icon\" href=\"%s/favicon.ico\" type=\"image/x-icon\">    \n",HTMLPATH);
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=ISO-8859-1\">\n");
fprintf(cgiOut,"<meta name=\"description\" content=\"Series/Parallel RL Network Conversion\">\n");
fprintf(cgiOut,"<meta name=\"keywords\" content=\"\n");
fprintf(cgiOut,"equivalent parallel network,\n");
fprintf(cgiOut,"equivalent series network,\n");
fprintf(cgiOut,"\">\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_init());
fprintf(cgiOut,"</HEAD>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<body bgcolor=\"#FFFFFF\" text=\"#000000\" onLoad=\"units_init()\">\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<H1 ALIGN=\"CENTER\">Series/Parallel RL Network Conversion Calculator</H1>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<P>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<FORM NAME=\"wcalc\" METHOD=GET ACTION=\"parallel_rl.cgi\">\n");
fprintf(cgiOut,"<TABLE>\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TABLE>\n");
fprintf(cgiOut,"<TR ALIGN=\"CENTER\">\n");
fprintf(cgiOut,"<TD><IMG SRC=\"%srl.png\" WIDTH=551 HEIGHT=168\n",HTMLPATH);
fprintf(cgiOut,"     ALT=\"[Series/Parallel RL Network Schematic]\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR ALIGN=\"CENTER\">\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" DISABLED NAME=\"status\" VALUE=\" \"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR ALIGN=\"CENTER\">\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TABLE>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Ls</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"Ls\" VALUE=\"%g\"\n",line->Ls/line->units_L->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_L));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Rs</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"Rs\" VALUE=\"%g\"\n",line->Rs/line->units_Rs->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_Rs));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Qs</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"Qs\" VALUE=\"%g\"\n",line->Qs);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>[-]</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TABLE>  <!-- end of model parameter table -->\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TABLE>  <!-- end left hand 1/2 of main table -->\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<TABLE>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Lp</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"Lp\" VALUE=\"%g\"\n",line->Lp/line->units_L->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>	   \n");
fprintf(cgiOut,"<INPUT TYPE=\"TEXT\" DISABLED VALUE=\" \" NAME=\"entry_L\">\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Rp</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"Rp\" VALUE=\"%g\"\n",line->Rp/line->units_Rp->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_Rp));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Qp</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"Qp\" VALUE=\"%g\"\n",line->Qp);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>[-]</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Frequency</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"freq\" VALUE=\"%g\"\n",line->freq/line->units_freq->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- frequency units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_freq));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Entry mode</TD>\n");
fprintf(cgiOut,"<TD>Q/L<INPUT TYPE=\"RADIO\" NAME=\"stype\" VALUE=\"use_Q\" %s\n",use_Q_checked);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>R/L<INPUT TYPE=\"RADIO\" NAME=\"stype\" VALUE=\"use_R\" %s\n",use_R_checked);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"SUBMIT\" NAME=\"s2p\" VALUE=\"Series To Parallel\"></TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"SUBMIT\" NAME=\"p2s\" VALUE=\"Parallel to Series\"></TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"SUBMIT\" NAME=\"reset\" VALUE=\"Reset\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TABLE>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"</TABLE>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</FORM>\n");
fprintf(cgiOut,"\n");

/* *********        End of Generated Code           ******** */

