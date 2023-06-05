/* ************************************** */
/* *********** Generated File *********** */
/* ***********  Do Not Edit   *********** */
/* ************************************** */

#include <gtk/gtk.h>

GtkWidget * permeability_table(void)
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
  item=gtk_label_new("Relative Permeability");
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
  item=gtk_label_new("Ferrite");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("3B7");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("2300 +/- 20%");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,5,6,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 7-8
   */

  /* Table column 1-2 */
  item=gtk_label_new("       ");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("3C3");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("2200 +/- 20%");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,7,8,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 9-10
   */

  /* Table column 1-2 */
  item=gtk_label_new("       ");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("3D3");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("750 +/- 20%");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,9,10,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 11-12
   */

  /* Table column 1-2 */
  item=gtk_label_new("       ");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,1,2,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 3-4 */
  item=gtk_label_new("4C4");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,3,4,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);

  /* Table column 5-6 */
  item=gtk_label_new("125 +/- 20%");
  gtk_misc_set_alignment(GTK_MISC(item),0,0.5);
  gtk_label_set_justify(GTK_LABEL(item),GTK_JUSTIFY_LEFT);
  gtk_label_set_line_wrap(GTK_LABEL(item),TRUE);
  gtk_table_attach(GTK_TABLE(tab),item,5,6,11,12,
    GTK_EXPAND|GTK_FILL, GTK_EXPAND|GTK_FILL,1,1);


  /*
   * Table Row 13-14
   */


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

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,0,1,0,15,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,2,3,0,15,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,4,5,0,15,
    GTK_FILL, GTK_FILL,1,1);

  item=gtk_vseparator_new();
  gtk_table_attach(GTK_TABLE(tab),item,6,7,0,15,
    GTK_FILL, GTK_FILL,1,1);


  gtk_scrolled_window_add_with_viewport(
          GTK_SCROLLED_WINDOW (scrolled_window), tab);
  gtk_widget_show_all(scrolled_window);

  return scrolled_window;
}
