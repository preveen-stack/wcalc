/* ************************************** */
/* *********** Generated File *********** */
/* ***********  Do Not Edit   *********** */
/* ************************************** */

#include <gtk/gtk.h>

GtkWidget * AWG_table(void)
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
  item=gtk_label_new("Wire Size (AWG)");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("Diameter (mil)");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("Diameter (mm)");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,1,2,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 3-4
   */


  /*
   * Table Row 5-6
   */

  /* Table column 1-2 */
  item=gtk_label_new("8	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("    128.49	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 3.264");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 7-8
   */

  /* Table column 1-2 */
  item=gtk_label_new("9	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("    114.42	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 2.906");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 9-10
   */

  /* Table column 1-2 */
  item=gtk_label_new("10	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("    101.90	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 2.588");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 11-12
   */

  /* Table column 1-2 */
  item=gtk_label_new("11	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     90.74	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 2.305");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 13-14
   */

  /* Table column 1-2 */
  item=gtk_label_new("12	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     80.81	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 2.053");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,13,14,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 15-16
   */

  /* Table column 1-2 */
  item=gtk_label_new("13	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     71.96	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 1.828");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,15,16,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 17-18
   */

  /* Table column 1-2 */
  item=gtk_label_new("14	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     64.08	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 1.628");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,17,18,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 19-20
   */

  /* Table column 1-2 */
  item=gtk_label_new("15	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     57.07	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 1.450");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,19,20,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 21-22
   */

  /* Table column 1-2 */
  item=gtk_label_new("16	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     50.82	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 1.291");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,21,22,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 23-24
   */

  /* Table column 1-2 */
  item=gtk_label_new("17	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     45.26	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 1.150");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,23,24,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 25-26
   */

  /* Table column 1-2 */
  item=gtk_label_new("18	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     40.30	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 1.024");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,25,26,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 27-28
   */

  /* Table column 1-2 */
  item=gtk_label_new("19	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     35.89	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.912");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,27,28,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 29-30
   */

  /* Table column 1-2 */
  item=gtk_label_new("20	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     31.96	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.812");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,29,30,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 31-32
   */

  /* Table column 1-2 */
  item=gtk_label_new("21	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,31,32,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     28.46	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,31,32,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.723");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,31,32,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 33-34
   */

  /* Table column 1-2 */
  item=gtk_label_new("22	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,33,34,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     25.35	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,33,34,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.644");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,33,34,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 35-36
   */

  /* Table column 1-2 */
  item=gtk_label_new("23	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,35,36,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     22.57	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,35,36,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.573");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,35,36,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 37-38
   */

  /* Table column 1-2 */
  item=gtk_label_new("24	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,37,38,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     20.10	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,37,38,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.511");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,37,38,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 39-40
   */

  /* Table column 1-2 */
  item=gtk_label_new("25	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,39,40,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     17.90	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,39,40,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.455");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,39,40,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 41-42
   */

  /* Table column 1-2 */
  item=gtk_label_new("26	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,41,42,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     15.94	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,41,42,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.405");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,41,42,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 43-44
   */

  /* Table column 1-2 */
  item=gtk_label_new("27	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,43,44,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     14.20	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,43,44,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.361");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,43,44,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 45-46
   */

  /* Table column 1-2 */
  item=gtk_label_new("28	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,45,46,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     12.64	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,45,46,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.321");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,45,46,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 47-48
   */

  /* Table column 1-2 */
  item=gtk_label_new("29	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,47,48,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     11.26	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,47,48,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.286");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,47,48,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 49-50
   */

  /* Table column 1-2 */
  item=gtk_label_new("30	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,49,50,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("     10.03	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,49,50,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.255");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,49,50,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 51-52
   */

  /* Table column 1-2 */
  item=gtk_label_new("31	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,51,52,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      8.93	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,51,52,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.227");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,51,52,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 53-54
   */

  /* Table column 1-2 */
  item=gtk_label_new("32	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,53,54,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      7.95	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,53,54,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.202");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,53,54,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 55-56
   */

  /* Table column 1-2 */
  item=gtk_label_new("33	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,55,56,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      7.08	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,55,56,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.180");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,55,56,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 57-58
   */

  /* Table column 1-2 */
  item=gtk_label_new("34	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,57,58,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      6.30	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,57,58,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.160");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,57,58,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 59-60
   */

  /* Table column 1-2 */
  item=gtk_label_new("35	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,59,60,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      5.61	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,59,60,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.143");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,59,60,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 61-62
   */

  /* Table column 1-2 */
  item=gtk_label_new("36	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,61,62,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      5.00	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,61,62,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.127");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,61,62,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 63-64
   */

  /* Table column 1-2 */
  item=gtk_label_new("37	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,63,64,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      4.45	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,63,64,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.113");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,63,64,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 65-66
   */

  /* Table column 1-2 */
  item=gtk_label_new("38	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,65,66,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      3.97	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,65,66,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.101");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,65,66,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 67-68
   */

  /* Table column 1-2 */
  item=gtk_label_new("39	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,67,68,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      3.53	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,67,68,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.090");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,67,68,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 69-70
   */

  /* Table column 1-2 */
  item=gtk_label_new("40	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,69,70,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      3.14	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,69,70,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.080");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,69,70,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 71-72
   */

  /* Table column 1-2 */
  item=gtk_label_new("41	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,71,72,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      2.80	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,71,72,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.071");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,71,72,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 73-74
   */

  /* Table column 1-2 */
  item=gtk_label_new("42	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,73,74,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("      2.49	");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,73,74,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new(" 0.063");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,73,74,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Add table grid lines
   */

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,0,1,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,2,3,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,4,5,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,6,7,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,8,9,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,10,11,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,12,13,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,14,15,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,16,17,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,18,19,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,20,21,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,22,23,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,24,25,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,26,27,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,28,29,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,30,31,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,32,33,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,34,35,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,36,37,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,38,39,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,40,41,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,42,43,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,44,45,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,46,47,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,48,49,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,50,51,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,52,53,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,54,55,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,56,57,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,58,59,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,60,61,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,62,63,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,64,65,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,66,67,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,68,69,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,70,71,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,72,73,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_hseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,7,74,75,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,1,0,75,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,2,3,0,75,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,4,5,0,75,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,6,7,0,75,
    GTK_FILL, GTK_FILL,1,1);


  gtk_scrolled_window_add_with_viewport(
          GTK_SCROLLED_WINDOW (scrolled_window), tab);
  gtk_widget_show_all(scrolled_window);

  return scrolled_window;
}
