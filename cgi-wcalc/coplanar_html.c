
/* ********* Automatically Generated.  Do not edit! ******** */
/* *********         Created with html2c            ******** */

fprintf(cgiOut,"<!-- $Id: coplanar.html,v 1.6 2009/02/11 00:00:28 dan Exp $ -->\n");
fprintf(cgiOut,"<!--\n");
fprintf(cgiOut," * Copyright (c) 2001, 2002, 2004, 2005, 2006 Dan McMahill\n");
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
fprintf(cgiOut,"<TITLE>Coplanar Waveguide Analysis/Synthesis</TITLE>\n");
fprintf(cgiOut,"<!-- Created by: Dan McMahill, 2001/09/12 -->\n");
fprintf(cgiOut,"<LINK REV=\"made\" HREF=\"mailto:nospam_to_mcmahill@alum.mit.make_edu\">\n");
fprintf(cgiOut,"<link rel=\"shortcut icon\" href=\"%s/favicon.ico\" type=\"image/x-icon\">    \n",HTMLPATH);
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=ISO-8859-1\">\n");
fprintf(cgiOut,"<meta name=\"description\" content=\"Coplanar Waveguide Analysis/Synthesis\">\n");
fprintf(cgiOut,"<meta name=\"keywords\" content=\"\n");
fprintf(cgiOut,"coplanar\n");
fprintf(cgiOut,"coplanar waveguide\n");
fprintf(cgiOut,"\">\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_init());
fprintf(cgiOut,"</HEAD>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<body bgcolor=\"#FFFFFF\" text=\"#000000\" onLoad=\"units_init()\">\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<H1 ALIGN=\"CENTER\">Coplanar Waveguide Analysis/Synthesis Calculator</H1>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<P>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<FORM NAME=\"wcalc\" METHOD=GET ACTION=\"coplanar.cgi\">\n");
fprintf(cgiOut,"<TABLE>\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TABLE>\n");
fprintf(cgiOut,"<TR ALIGN=\"CENTER\">\n");
fprintf(cgiOut,"<TD><IMG SRC=\"%scoplanar_model.png\" WIDTH=489 HEIGHT=193\n",HTMLPATH);
fprintf(cgiOut,"     ALT=\"[Coplanar Waveguide Circuit Model]\"></TD>\n");
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
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Ls =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->Ls/line->units_L->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_L));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Rs =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->Rs/line->units_R->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_R));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Cs =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->Cs/line->units_C->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_C));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Gs =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->Gs/line->units_G->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_G));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Z0 =</TD>\n");
fprintf(cgiOut,"<TD>%g + j %g</TD>\n",line->Ro,line->Xo);
fprintf(cgiOut,"<TD>[ohm]</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Loss =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->loss/line->units_loss->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_loss));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Loss/len =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->losslen/line->units_losslen->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_losslen));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Skin depth =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->skindepth/line->units_depth->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- skin depth units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_depth));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Delay =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->delay/line->units_delay->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_delay));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>End correction =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",line->deltal/line->units_deltal->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- DeltaL units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_deltal));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Corrected length =</TD>\n");
fprintf(cgiOut,"<TD>%g</TD>\n",(line->l-line->deltal)/line->units_lwht->sf);
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- DeltaL units menu -->\n");
fprintf(cgiOut,"<INPUT TYPE=\"TEXT\" DISABLED VALUE=\" \" NAME=\"entry_len2\">\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TABLE>  <!-- end of model parameter table -->\n");
fprintf(cgiOut,"</TD>     <!-- end of cell with left hand entry table -->\n");
fprintf(cgiOut,"</TR>     <!-- end of row with left hand entry table -->\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TABLE>  <!-- end left hand table -->\n");
fprintf(cgiOut,"</TD>     <!-- end cell in main table holding left hand side -->\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TD>      <!-- right hand cell -->\n");
fprintf(cgiOut,"<TABLE>   <!-- right hand table -->\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR ALIGN=\"CENTER\">\n");
fprintf(cgiOut,"<TD><IMG SRC=\"%scoplanar.png\" WIDTH=368 HEIGHT=194 \n",HTMLPATH);
fprintf(cgiOut,"     ALT=\"[Coplanar Waveguide Cross-section]\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TABLE>  <!-- right hand entry table -->\n");
fprintf(cgiOut,"\n");
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
fprintf(cgiOut,"<TD>Metal spacing (S)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"s\" VALUE=\"%g\"\n",line->s/line->units_lwht->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<INPUT TYPE=\"TEXT\" DISABLED VALUE=\" \" NAME=\"entry_s\">\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"SUBMIT\" NAME=\"synth_s\" VALUE=\"calc\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Trace length (L)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"l\" VALUE=\"%g\"\n",line->l/line->units_len->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- length units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_len));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"<TD></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Metal thickness (Tmet)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"tmet\" VALUE=\"%g\"\n",line->subs->tmet/line->units_lwht->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- tmet units menu -->\n");
fprintf(cgiOut,"<INPUT TYPE=\"TEXT\" DISABLED VALUE=\" \" NAME=\"entry_t\">\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD><A HREF=\"%sresistivity.html\">Metal resistivity (RHO)</A></TD>\n",HTMLPATH);
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"rho\" VALUE=\"%g\"\n",line->subs->rho/line->units_rho->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- RHO units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_rho));
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Metal surface roughness (RGH)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"rough\" VALUE=\"%g\"\n",line->subs->rough/line->units_rough->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- roughness units menu -->\n");
fprintf(cgiOut,"%s\n",cgi_units_menu_display(menu_rough));
fprintf(cgiOut,"-rms</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Substrate thickness (H)</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"h\" VALUE=\"%g\"\n",line->subs->h/line->units_lwht->sf);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>\n");
fprintf(cgiOut,"<!-- thickness units menu -->\n");
fprintf(cgiOut,"<INPUT TYPE=\"TEXT\" DISABLED VALUE=\" \" NAME=\"entry_h\">\n");
fprintf(cgiOut,"</TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"SUBMIT\" NAME=\"synth_h\" VALUE=\"calc\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD><A HREF=\"%spermitivity.html\">Substrate relative dielectric constant (Er)</A></TD>\n",HTMLPATH);
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"es\" VALUE=\"%g\"\n",line->subs->er);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD></TD>\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"SUBMIT\" NAME=\"synth_es\" VALUE=\"calc\"></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD><A HREF=\"%spermitivity.html\">Substrate loss tangent (tand)</A></TD>\n",HTMLPATH);
fprintf(cgiOut,"<TD><INPUT TYPE=\"TEXT\" SIZE=10 NAME=\"tand\" VALUE=\"%g\"\n",line->subs->tand);
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD></TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
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
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TD><INPUT TYPE=\"CHECKBOX\" NAME=\"withgnd\"\n");
fprintf(cgiOut,"           %s\n",line->with_ground ? "checked" : "");
fprintf(cgiOut,"           onChange=\"valsChanged()\"></TD>\n");
fprintf(cgiOut,"<TD>Include bottom side ground</TD>\n");
fprintf(cgiOut,"</TR>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"<TR>\n");
fprintf(cgiOut,"<TD>Characteristic Impedance</TD>\n");
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
fprintf(cgiOut,"</TABLE>  <!-- The values table in the right side -->\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TD>     <!-- The cell in the right hand table with the values table -->\n");
fprintf(cgiOut,"</TR>     <!-- The row in the right hand table with the values table -->\n");
fprintf(cgiOut,"</TABLE>  <!-- The right hand table -->\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</TD>     <!-- The cell with the right hand table -->\n");
fprintf(cgiOut,"</TR>     <!-- The row in the main table -->\n");
fprintf(cgiOut,"</TABLE>  <!-- The main table -->\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"</FORM>\n");
fprintf(cgiOut,"\n");
fprintf(cgiOut,"\n");

/* *********        End of Generated Code           ******** */

