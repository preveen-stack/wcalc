/* ************************************** */
/* *********** Generated File *********** */
/* ***********  Do Not Edit   *********** */
/* ************************************** */

#include <gtk/gtk.h>

GtkWidget * permitivity_table(void)
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
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("Relative Permitivitty");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("Loss Tangent");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 3-4
   */


  /*
   * Table Row 5-6
   */

  /* Table column 1-2 */
  item=gtk_label_new("Alumina");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("99.5% Pure");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("9.8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("0.0001");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 7-8
   */

  /* Table column 1-2 */
  item=gtk_label_new("FR4");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Fiberglass");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("4.2-4.9");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("0.01-0.016");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 9-10
   */

  /* Table column 1-2 */
  item=gtk_label_new("GaAs");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("12.9");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("0.002");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 11-12
   */

  /* Table column 1-2 */
  item=gtk_label_new("GML-1000");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("0.030 inch laminate");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("3.2 +/- 0.05");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new(".002-.005");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 13-14
   */

  /* Table column 1-2 */
  item=gtk_label_new("GML-1000");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("0.060 inch laminate");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("3.05 +/- 0.05");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new(".002-.005");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 15-16
   */

  /* Table column 1-2 */
  item=gtk_label_new("PTFE");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("2.1");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("0.0003");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 17-18
   */

  /* Table column 1-2 */
  item=gtk_label_new("Quartz");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("3.78");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("0.0001");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 19-20
   */

  /* Table column 1-2 */
  item=gtk_label_new("RO4350B");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("3.48 +/- 0.05");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new(".0031-.0037");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 21-22
   */

  /* Table column 1-2 */
  item=gtk_label_new("RT/duroid 5870");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("2.33 +/- 0.02");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("0.0005 - 0.0012");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 23-24
   */

  /* Table column 1-2 */
  item=gtk_label_new("RT/duroid 5880");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("2.20 +/- 0.02");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("0.0004 - 0.0009");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 25-26
   */

  /* Table column 1-2 */
  item=gtk_label_new("Silicon");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Si");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("11.8");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 27-28
   */

  /* Table column 1-2 */
  item=gtk_label_new("Silicon Dioxide");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("SiO2");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("4.5");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 29-30
   */

  /* Table column 1-2 */
  item=gtk_label_new("Silicon Nitride");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Si3N4");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("7.5");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 7-8 */
  item=gtk_label_new("");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,7,8,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Add table grid lines
   */

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,0,1,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,2,3,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,4,5,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,6,7,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,8,9,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,10,11,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,12,13,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,14,15,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,16,17,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,18,19,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,20,21,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,22,23,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,24,25,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,26,27,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,28,29,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,9,30,31,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,1,0,31,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,2,3,0,31,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,4,5,0,31,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,6,7,0,31,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,8,9,0,31,
    GTK_FILL, GTK_FILL,1,1);


  gtk_scrolled_window_add_with_viewport(
          GTK_SCROLLED_WINDOW (scrolled_window), tab);
  gtk_widget_show_all(scrolled_window);

  return scrolled_window;
}
