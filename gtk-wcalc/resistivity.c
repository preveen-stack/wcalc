/* ************************************** */
/* *********** Generated File *********** */
/* ***********  Do Not Edit   *********** */
/* ************************************** */

#include <gtk/gtk.h>

GtkWidget * resistivity_table(void)
{
  GtkWidget *item, *tab, *scrolled_window;

  scrolled_window = gtk_scrolled_window_new (NULL, NULL);
  gtk_container_set_border_width (GTK_CONTAINER (scrolled_window), 10);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolled_window),
          GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);

  tab = gtk_table_new(0,0,FALSE);


  /*
   * Table Row 1-2
   */

  /* Table column 1-2 */
  item=gtk_label_new("Material");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new(" ");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("Resistivity (Ohm-meter)");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("Temperature (C)");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("T.C.");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 3-4
   */


  /*
   * Table Row 5-6
   */

  /* Table column 1-2 */
  item=gtk_label_new("Aluminum");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Al");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("2.62e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.0039");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 7-8
   */

  /* Table column 1-2 */
  item=gtk_label_new("Bismuth");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Bi");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("115e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.004");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 9-10
   */

  /* Table column 1-2 */
  item=gtk_label_new("Brass");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("66 Cu 34 Zn");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("3.9e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.002");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 11-12
   */

  /* Table column 1-2 */
  item=gtk_label_new("Copper");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Cu");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("1.72e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.0039");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 13-14
   */

  /* Table column 1-2 */
  item=gtk_label_new("Gold");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Au");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("2.44e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.0034");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 15-16
   */

  /* Table column 1-2 */
  item=gtk_label_new("Iron");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Fe");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("9.71e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.0052-0.0062");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 17-18
   */

  /* Table column 1-2 */
  item=gtk_label_new("Lead");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Pb");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("21.9e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.004");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 19-20
   */

  /* Table column 1-2 */
  item=gtk_label_new("Mercury");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Hg");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("95.8e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.00089");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 21-22
   */

  /* Table column 1-2 */
  item=gtk_label_new("Nichrome");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("65 Ni, 12 Cr, 23 Fe)");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("100e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.00017");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 23-24
   */

  /* Table column 1-2 */
  item=gtk_label_new("Nickel");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Ni");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("6.9e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.0047");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 25-26
   */

  /* Table column 1-2 */
  item=gtk_label_new("Platinum");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Pt");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("10.5e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.003");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 27-28
   */

  /* Table column 1-2 */
  item=gtk_label_new("Silver");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Ag");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("1.62e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.0038");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 29-30
   */

  /* Table column 1-2 */
  item=gtk_label_new("Steel");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("0.4-0.5 C, balance Fe");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("13-22e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.003");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 31-32
   */

  /* Table column 1-2 */
  item=gtk_label_new("Steel,manganese");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,31,32,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("13 Mn, 1C, 86 Fe");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,31,32,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("70e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,31,32,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,31,32,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.001");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,31,32,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 33-34
   */

  /* Table column 1-2 */
  item=gtk_label_new("Steel,stainless");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,33,34,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("0.1 C, 18 Cr, 8 Ni, balance Fe");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,33,34,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("90e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,33,34,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,33,34,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,33,34,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 35-36
   */

  /* Table column 1-2 */
  item=gtk_label_new("Tungsten");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,35,36,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("W");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,35,36,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("5.48e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,35,36,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,35,36,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.0045");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,35,36,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 37-38
   */

  /* Table column 1-2 */
  item=gtk_label_new("Zinc");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,37,38,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,37,38,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("6.0e-8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,37,38,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("20");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,37,38,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 9-10 */
  item=gtk_label_new("0.0037");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,9,10,37,38,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Add table grid lines
   */

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,0,1,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,2,3,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,4,5,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,6,7,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,8,9,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,10,11,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,12,13,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,14,15,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,16,17,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,18,19,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,20,21,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,22,23,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,24,25,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,26,27,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,28,29,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,30,31,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,32,33,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,34,35,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,36,37,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,11,38,39,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,1,0,39,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,2,3,0,39,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,4,5,0,39,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,6,7,0,39,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,8,9,0,39,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,10,11,0,39,
    GTK_FILL, GTK_FILL,1,1);


  gtk_scrolled_window_add_with_viewport(
          GTK_SCROLLED_WINDOW (scrolled_window), tab);
  gtk_widget_show_all(scrolled_window);

  return scrolled_window;
}
