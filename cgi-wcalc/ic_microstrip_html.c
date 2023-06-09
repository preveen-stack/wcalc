
/* ********* Automatically Generated.  Do not edit! ******** */
/* *********         Created with html2c            ******** */

fprintf(cgiOut,"<!-- $Id: ic_microstrip.html,v 1.11 2009/02/11 00:00:29 dan Exp $ -->\n");
fprintf(cgiOut,"<!--\n");
fprintf(cgiOut," * Copyright (c) 2001, 2002, 2004, 2005 Dan McMahill\n");
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
fprintf(cgiOut,"<TITLE>Integrated Circuit Microstrip Analysis</TITLE>\n");
fprintf(cgiOut,"<!-- Created by: Dan McMahill, 2001/09/08 -->\n");
fprintf(cgiOut,"<LINK REV=\"made\" HREF=\"mailto:nospam_to_mcmahill@alum.mit.make_edu\">\n");
fprintf(cgiOut,"<link rel=\"shortcut icon\" href=\"%s/favicon.ico\" type=\"image/x-icon\">    \n",HTMLPATH);
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=ISO-8859-1\">\n");
fprintf(cgiOut,"<meta name=\"description\" content=\"Integrated Circuit Microstrip Analysis\">\n");
fprintf(cgiOut,"<meta name=\"keywords\" content=\"\n");
fprintf(cgiOut,"integrated circuit microstrip\n");
fprintf(cgiOut,"\">\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_init());
fprintf(cgiOut,"</HEAD>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<body bgcolor=\"#FFFFFF\" text=\"#000000\" onLoad=\"units_init()\">\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<H1 ALIGN=\"CENTER\">Integrated Circuit Microstrip Analysis Calculator</H1>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<P>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<FORM NAME=\"wcalc\" METHOD=GET ACTION=\"ic_microstrip.cgi\">\n");
fprintf(cgiOut,"<TABLE>\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TABLE>\n");
fprintf(cgiOut,"<TR ALIGN=\"CENTER\">\n");
fprintf(cgiOut,"<TD><IMG SRC=\"%sic_microstrip.png\" WIDTH=429 HEIGHT=229 \n",HTMLPATH);
fprintf(cgiOut,"     ALT=\"[IC Microstrip Cross-section]\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"<TR ALIGN=\"CENTER\">\n");
fprintf(cgiOut,"<TD><IMG SRC=\"%sic_microstrip_model.png\" WIDTH=287 HEIGHT=125\n",HTMLPATH);
fprintf(cgiOut,"     ALT=\"[IC Microstrip Circuit Model]\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR ALIGN=\"CENTER\">\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" DISABLED NAME=\"status\" VALUE=\"JUST LOADED\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR ALIGN=\"CENTER\">\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TABLE>\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Lmis =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->Lmis/line->units_L->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_L));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Rmis =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->Rmis/line->units_R->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_R));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Cmis =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->Cmis/line->units_C->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_C));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Gmis =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->Gmis/line->units_G->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_G));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Z0 =</TD>\n");
fprintf(cgiOut,"<TD>%g + j %g</TD>\n",line->Ro,line->Xo);
fprintf(cgiOut,"<TD>[ohm]</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"</TABLE>  <!-- end of model parameter table -->\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TABLE>  <!-- end left hand 1/2 of main table -->\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<TABLE>\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Metal width (W)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"w\" VALUE=\"%g\"\n",line->w/line->units_lwht->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- width units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_lwht));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"SUBMIT\" NAME=\"synth_w\" VALUE=\"calc\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Metal length (L)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"l\" VALUE=\"%g\"\n",line->l/line->units_lwht->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- length units menu -->\n");
fprintf(cgiOut,"<INPUT TYPE=\"TEXT\" DISABLED VALUE=\" \" NAME=\"entry_l\">\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Substrate thickness (H)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"h\" VALUE=\"%g\"\n",line->subs->h/line->units_lwht->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- substrate thickness units menu -->\n");
fprintf(cgiOut,"<INPUT TYPE=\"TEXT\" DISABLED VALUE=\" \" NAME=\"entry_h\">\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"SUBMIT\" NAME=\"synth_h\" VALUE=\"calc\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD><A HREF=\"%spermitivity.html\">Substrate relative dielectric constant (Es)</A></TD>\n",HTMLPATH);
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"es\" VALUE=\"%g\"\n",line->subs->es);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Substrate conductivity (sigmas)</TD>\n");
fprintf(cgiOut,"<!-- XXX -->\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"sigmas\" VALUE=\"%g\"\n",line->subs->sigmas/line->units_sigmas->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- substrate resistivity units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_sigmas));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Oxide thickness (Tox)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"tox\" VALUE=\"%g\"\n",line->subs->tox/line->units_lwht->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- oxide thickness units menu -->\n");
fprintf(cgiOut,"<INPUT TYPE=\"TEXT\" DISABLED VALUE=\" \" NAME=\"entry_tox\">\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"SUBMIT\" NAME=\"synth_tox\" VALUE=\"calc\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD><A HREF=\"%spermitivity.html\">Oxide relative dielectric constant (Eox)</A></TD>\n",HTMLPATH);
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"eox\" VALUE=\"%g\"\n",line->subs->eox);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD> </TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Metal thickness (Tmet)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"tmet\" VALUE=\"%g\"\n",line->subs->tmet/line->units_lwht->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- metal thickness units menu -->\n");
fprintf(cgiOut,"<INPUT TYPE=\"TEXT\" DISABLED VALUE=\" \" NAME=\"entry_tmet\">\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD><A HREF=\"%sresistivity.html\">Metal resistivity (RHO)</A></TD>\n",HTMLPATH);
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"rho\" \n");
fprintf(cgiOut,"  VALUE=\"%g\" \n",line->subs->rho/line->units_rho->sf);
fprintf(cgiOut,"  onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- Resistivity units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_rho));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Metal surface roughness (RGH)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"rough\" \n");
fprintf(cgiOut,"  VALUE=\"%g\"\n",line->subs->rough/line->units_rough->sf);
fprintf(cgiOut,"  onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- roughness units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_rough));
fprintf(cgiOut,"-rms</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Frequency</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"freq\" VALUE=\"%g\"\n",line->freq/line->units_freq->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- freq units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_freq));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"SUBMIT\" NAME=\"analyze\" VALUE=\"Analyze\">\n");
fprintf(cgiOut,"<INPUT TYPE=\"SUBMIT\" NAME=\"reset\" VALUE=\"Reset\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Characteristic Resistance</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"Ro\" VALUE=\"%g\"\n",line->Ro);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>[ohms]</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Electrical Length</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"elen\" VALUE=\"%g\"\n",line->len);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>[degrees]</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TABLE>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"</TABLE>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</FORM>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"\n");

/* *********        End of Generated Code           ******** */

