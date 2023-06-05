/* ***** Generated from pstoedit ***** */
#include <cairo.h>
#include <stdio.h>

/*
 * Original bounding box = for page # 1 is
 * LL: x: 103 y: 671 UR: x: 313 y: 774
 * The figure has been offset by (-103, 774)
 * to move LL to (0,0).  The width and height
 * can be read from the following two variables:
 */
static int figure_coupled_microstrip_page_1_width = 210;
static int figure_coupled_microstrip_page_1_height = 103;

static cairo_t * figure_coupled_microstrip_page_1_render(cairo_surface_t *cs, cairo_t *cr)
{

  if (cr == NULL && cs == NULL) {
    return NULL;
  } else if(cr == NULL && cs != NULL) {
    cr = cairo_create (cs);
  } else if(cr != NULL && cs == NULL) {
  } else if(cr != NULL && cs != NULL) {
  }

  cairo_save (cr);

  /* set an initial font */
  cairo_select_font_face (cr, "monospace", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);


  /*
   * Path # 1 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 5, 54);
  cairo_line_to (cr, 149, 54);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 2 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 5, 90);
  cairo_line_to (cr, 149, 90);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 3 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 149, 54);
  cairo_line_to (cr, 203, 18);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 4 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 104, 54);
  cairo_line_to (cr, 162.5, 18);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 5 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 32, 45);
  cairo_line_to (cr, 90.5, 9);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 6 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 167, 18);
  cairo_line_to (cr, 207.5, 18);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 7 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 90);
  cairo_line_to (cr, 149, 90);
  cairo_line_to (cr, 149, 99);
  cairo_line_to (cr, 0.5, 99);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 8 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 90);
  cairo_line_to (cr, 149, 90);
  cairo_line_to (cr, 149, 99);
  cairo_line_to (cr, 0.5, 99);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 9 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 149, 90);
  cairo_line_to (cr, 203, 54);
  cairo_line_to (cr, 203, 63);
  cairo_line_to (cr, 149, 99);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 10 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 149, 90);
  cairo_line_to (cr, 203, 54);
  cairo_line_to (cr, 203, 63);
  cairo_line_to (cr, 149, 99);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 11 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 6 */
  cairo_move_to (cr, 0.5, 54);
  cairo_line_to (cr, 0.5, 90);
  cairo_line_to (cr, 149, 90);
  cairo_line_to (cr, 203, 54);
  cairo_line_to (cr, 203, 18);
  cairo_line_to (cr, 149, 54);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 12 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 6 */
  cairo_move_to (cr, 0.5, 54);
  cairo_line_to (cr, 0.5, 90);
  cairo_line_to (cr, 149, 90);
  cairo_line_to (cr, 203, 54);
  cairo_line_to (cr, 203, 18);
  cairo_line_to (cr, 149, 54);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 13 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 149, 54);
  cairo_line_to (cr, 149, 90);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 14 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 54);
  cairo_line_to (cr, 54.5, 18);
  cairo_line_to (cr, 203, 18);
  cairo_line_to (cr, 149, 54);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 15 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 54);
  cairo_line_to (cr, 54.5, 18);
  cairo_line_to (cr, 203, 18);
  cairo_line_to (cr, 149, 54);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 16 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 9.5, 58.5);
  cairo_line_to (cr, 9.5, 85.5);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 17 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 9.5, 54);
  cairo_line_to (cr, 11.188, 58.5);
  cairo_line_to (cr, 7.812, 58.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 18 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 9.5, 54);
  cairo_line_to (cr, 11.188, 58.5);
  cairo_line_to (cr, 7.812, 58.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 19 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 9.5, 90);
  cairo_line_to (cr, 7.812, 85.5);
  cairo_line_to (cr, 11.188, 85.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 20 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 9.5, 90);
  cairo_line_to (cr, 7.812, 85.5);
  cairo_line_to (cr, 11.188, 85.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 21 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 36.5, 63);
  cairo_line_to (cr, 54.5, 63);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 22 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 32, 63);
  cairo_line_to (cr, 36.5, 61.312);
  cairo_line_to (cr, 36.5, 64.688);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 23 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 32, 63);
  cairo_line_to (cr, 36.5, 61.312);
  cairo_line_to (cr, 36.5, 64.688);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 24 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 59, 63);
  cairo_line_to (cr, 54.5, 64.688);
  cairo_line_to (cr, 54.5, 61.312);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 25 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 59, 63);
  cairo_line_to (cr, 54.5, 64.688);
  cairo_line_to (cr, 54.5, 61.312);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 26 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 26.832, 42.641);
  cairo_line_to (cr, 77.668, 11.359);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 27 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 23, 45);
  cairo_line_to (cr, 25.949, 41.203);
  cairo_line_to (cr, 27.719, 44.078);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 28 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 23, 45);
  cairo_line_to (cr, 25.949, 41.203);
  cairo_line_to (cr, 27.719, 44.078);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 29 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 81.5, 9);
  cairo_line_to (cr, 78.551, 12.797);
  cairo_line_to (cr, 76.781, 9.922);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 30 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 81.5, 9);
  cairo_line_to (cr, 78.551, 12.797);
  cairo_line_to (cr, 76.781, 9.922);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 31 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 86, 9);
  cairo_line_to (cr, 72.5, 9);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 32 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 27.5, 45);
  cairo_line_to (cr, 18.5, 45);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 33 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 59, 58.5);
  cairo_line_to (cr, 59, 67.5);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 34 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 32, 58.5);
  cairo_line_to (cr, 32, 67.5);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 35 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 14 */
  cairo_move_to (cr, 47.371, 78);
  cairo_line_to (cr, 49.453, 69.797);
  cairo_line_to (cr, 48.281, 69.797);
  cairo_line_to (cr, 46.773, 76.457);
  cairo_line_to (cr, 44.906, 69.797);
  cairo_line_to (cr, 43.781, 69.797);
  cairo_line_to (cr, 41.957, 76.457);
  cairo_line_to (cr, 40.418, 69.797);
  cairo_line_to (cr, 39.246, 69.797);
  cairo_line_to (cr, 41.352, 78);
  cairo_line_to (cr, 42.5, 78);
  cairo_line_to (cr, 44.332, 71.262);
  cairo_line_to (cr, 46.223, 78);
  cairo_close_path (cr);
  cairo_move_to (cr, 49.367, 77.625);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 36 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 13 */
  cairo_move_to (cr, 20.199, 74.266);
  cairo_line_to (cr, 20.199, 78);
  cairo_line_to (cr, 21.246, 78);
  cairo_line_to (cr, 21.246, 69.797);
  cairo_line_to (cr, 20.199, 69.797);
  cairo_line_to (cr, 20.199, 73.344);
  cairo_line_to (cr, 15.98, 73.344);
  cairo_line_to (cr, 15.98, 69.797);
  cairo_line_to (cr, 14.934, 69.797);
  cairo_line_to (cr, 14.934, 78);
  cairo_line_to (cr, 15.992, 78);
  cairo_line_to (cr, 15.992, 74.266);
  cairo_close_path (cr);
  cairo_move_to (cr, 22.121, 77.625);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 37 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 7 */
  cairo_move_to (cr, 60.945, 6.797);
  cairo_line_to (cr, 59.898, 6.797);
  cairo_line_to (cr, 59.898, 15);
  cairo_line_to (cr, 64.996, 15);
  cairo_line_to (cr, 64.996, 14.078);
  cairo_line_to (cr, 60.945, 14.078);
  cairo_close_path (cr);
  cairo_move_to (cr, 65.254, 14.625);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 38 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 176, 4.5);
  cairo_line_to (cr, 176, 0);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 39 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 176, 9);
  cairo_line_to (cr, 174.312, 4.5);
  cairo_line_to (cr, 177.688, 4.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 40 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 176, 9);
  cairo_line_to (cr, 174.312, 4.5);
  cairo_line_to (cr, 177.688, 4.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 41 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 176, 22.5);
  cairo_line_to (cr, 176, 27);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 42 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 176, 18);
  cairo_line_to (cr, 177.688, 22.5);
  cairo_line_to (cr, 174.312, 22.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 43 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 176, 18);
  cairo_line_to (cr, 177.688, 22.5);
  cairo_line_to (cr, 174.312, 22.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 44 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 171.5, 9);
  cairo_line_to (cr, 180.5, 9);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 45 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 184.438, 3.93799);
  cairo_line_to (cr, 209.75, 3.93799);
  cairo_line_to (cr, 209.75, 16.875);
  cairo_line_to (cr, 184.438, 16.875);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 46 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 62 */
  cairo_move_to (cr, 188.984, 7.72302);
  cairo_line_to (cr, 191.672, 7.72302);
  cairo_line_to (cr, 191.672, 6.797);
  cairo_line_to (cr, 185.234, 6.797);
  cairo_line_to (cr, 185.234, 7.72302);
  cairo_line_to (cr, 187.938, 7.72302);
  cairo_line_to (cr, 187.938, 15);
  cairo_line_to (cr, 188.984, 15);
  cairo_close_path (cr);
  cairo_move_to (cr, 192.789, 9.10498);
  cairo_line_to (cr, 192.789, 15);
  cairo_line_to (cr, 193.734, 15);
  cairo_line_to (cr, 193.734, 11.297);
  cairo_curve_to (cr, 193.734, 10.445, 194.352, 9.758, 195.117, 9.758);

  cairo_curve_to (cr, 195.812, 9.758, 196.207, 10.184, 196.207, 10.938);

  cairo_line_to (cr, 196.207, 15);
  cairo_line_to (cr, 197.152, 15);
  cairo_line_to (cr, 197.152, 11.297);
  cairo_curve_to (cr, 197.152, 10.445, 197.77, 9.758, 198.535, 9.758);

  cairo_curve_to (cr, 199.223, 9.758, 199.629, 10.195, 199.629, 10.938);

  cairo_line_to (cr, 199.629, 15);
  cairo_line_to (cr, 200.574, 15);
  cairo_line_to (cr, 200.574, 10.578);
  cairo_curve_to (cr, 200.574, 9.52002, 199.965, 8.93799, 198.863, 8.93799);

  cairo_curve_to (cr, 198.074, 8.93799, 197.602, 9.172, 197.051, 9.836);

  cairo_curve_to (cr, 196.703, 9.20697, 196.23, 8.93799, 195.465, 8.93799);

  cairo_curve_to (cr, 194.676, 8.93799, 194.16, 9.22998, 193.652, 9.93799);

  cairo_line_to (cr, 193.652, 9.10498);
  cairo_close_path (cr);
  cairo_move_to (cr, 206.77, 12.367);
  cairo_curve_to (cr, 206.77, 11.469, 206.703, 10.926, 206.535, 10.488);

  cairo_curve_to (cr, 206.152, 9.52002, 205.254, 8.93799, 204.148, 8.93799);

  cairo_curve_to (cr, 202.508, 8.93799, 201.449, 10.195, 201.449, 12.133);

  cairo_curve_to (cr, 201.449, 14.066, 202.473, 15.258, 204.129, 15.258);

  cairo_curve_to (cr, 205.477, 15.258, 206.41, 14.492, 206.648, 13.211);

  cairo_line_to (cr, 205.703, 13.211);
  cairo_curve_to (cr, 205.445, 13.988, 204.914, 14.391, 204.16, 14.391);

  cairo_curve_to (cr, 203.566, 14.391, 203.059, 14.121, 202.742, 13.629);

  cairo_curve_to (cr, 202.52, 13.289, 202.441, 12.953, 202.43, 12.367);

  cairo_close_path (cr);
  cairo_move_to (cr, 202.453, 11.602);
  cairo_curve_to (cr, 202.531, 10.512, 203.195, 9.80103, 204.141, 9.80103);

  cairo_curve_to (cr, 205.062, 9.80103, 205.77, 10.566, 205.77, 11.535);

  cairo_curve_to (cr, 205.77, 11.559, 205.77, 11.578, 205.758, 11.602);

  cairo_close_path (cr);
  cairo_move_to (cr, 209.859, 9.10498);
  cairo_line_to (cr, 208.891, 9.10498);
  cairo_line_to (cr, 208.891, 7.48401);
  cairo_line_to (cr, 207.957, 7.48401);
  cairo_line_to (cr, 207.957, 9.10498);
  cairo_line_to (cr, 207.156, 9.10498);
  cairo_line_to (cr, 207.156, 9.87097);
  cairo_line_to (cr, 207.957, 9.87097);
  cairo_line_to (cr, 207.957, 14.324);
  cairo_curve_to (cr, 207.957, 14.922, 208.359, 15.258, 209.094, 15.258);

  cairo_curve_to (cr, 209.316, 15.258, 209.543, 15.234, 209.859, 15.18);

  cairo_line_to (cr, 209.859, 14.391);
  cairo_curve_to (cr, 209.734, 14.426, 209.586, 14.438, 209.406, 14.438);

  cairo_curve_to (cr, 209.004, 14.438, 208.891, 14.324, 208.891, 13.91);

  cairo_line_to (cr, 208.891, 9.87097);
  cairo_line_to (cr, 209.859, 9.87097);
  cairo_close_path (cr);
  cairo_move_to (cr, 210.621, 14.625);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 47 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 167, 94.5);
  cairo_line_to (cr, 176, 94.5);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 48 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 162.5, 94.5);
  cairo_line_to (cr, 167, 92.812);
  cairo_line_to (cr, 167, 96.188);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 49 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 162.5, 94.5);
  cairo_line_to (cr, 167, 92.812);
  cairo_line_to (cr, 167, 96.188);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 50 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 179.938, 89.438);
  cairo_line_to (cr, 204.688, 89.438);
  cairo_line_to (cr, 204.688, 102.375);
  cairo_line_to (cr, 179.938, 102.375);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 51 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 42 */
  cairo_move_to (cr, 188.977, 95.668);
  cairo_line_to (cr, 185.555, 95.668);
  cairo_line_to (cr, 185.555, 96.59);
  cairo_line_to (cr, 188.055, 96.59);
  cairo_line_to (cr, 188.055, 96.816);
  cairo_curve_to (cr, 188.055, 98.277, 186.973, 99.336, 185.477, 99.336);

  cairo_curve_to (cr, 184.645, 99.336, 183.891, 99.031, 183.406, 98.504);

  cairo_curve_to (cr, 182.867, 97.918, 182.543, 96.941, 182.543, 95.926);

  cairo_curve_to (cr, 182.543, 93.914, 183.688, 92.586, 185.422, 92.586);

  cairo_curve_to (cr, 186.672, 92.586, 187.57, 93.227, 187.797, 94.285);

  cairo_line_to (cr, 188.863, 94.285);
  cairo_curve_to (cr, 188.57, 92.621, 187.312, 91.664, 185.434, 91.664);

  cairo_curve_to (cr, 184.43, 91.664, 183.621, 91.922, 182.98, 92.453);

  cairo_curve_to (cr, 182.035, 93.238, 181.496, 94.512, 181.496, 95.984);

  cairo_curve_to (cr, 181.496, 98.504, 183.035, 100.258, 185.254, 100.258);

  cairo_curve_to (cr, 186.367, 100.258, 187.254, 99.844, 188.055, 98.953);

  cairo_line_to (cr, 188.312, 100.047);
  cairo_line_to (cr, 188.977, 100.047);
  cairo_close_path (cr);
  cairo_move_to (cr, 196.266, 91.797);
  cairo_line_to (cr, 195.277, 91.797);
  cairo_line_to (cr, 195.277, 98.504);
  cairo_line_to (cr, 190.992, 91.797);
  cairo_line_to (cr, 189.855, 91.797);
  cairo_line_to (cr, 189.855, 100);
  cairo_line_to (cr, 190.844, 100);
  cairo_line_to (cr, 190.844, 93.352);
  cairo_line_to (cr, 195.086, 100);
  cairo_line_to (cr, 196.266, 100);
  cairo_close_path (cr);
  cairo_move_to (cr, 198, 100);
  cairo_line_to (cr, 201.164, 100);
  cairo_curve_to (cr, 203.234, 100, 204.504, 98.449, 204.504, 95.895);

  cairo_curve_to (cr, 204.504, 93.352, 203.242, 91.797, 201.164, 91.797);

  cairo_line_to (cr, 198, 91.797);
  cairo_close_path (cr);
  cairo_move_to (cr, 199.047, 99.078);
  cairo_line_to (cr, 199.047, 92.723);
  cairo_line_to (cr, 200.984, 92.723);
  cairo_curve_to (cr, 202.602, 92.723, 203.457, 93.812, 203.457, 95.906);

  cairo_curve_to (cr, 203.457, 97.977, 202.602, 99.078, 200.984, 99.078);

  cairo_close_path (cr);
  cairo_move_to (cr, 205.492, 100.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 52 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 68 */
  cairo_move_to (cr, 115.777, 78.105);
  cairo_line_to (cr, 115.777, 84);
  cairo_line_to (cr, 116.723, 84);
  cairo_line_to (cr, 116.723, 80.941);
  cairo_curve_to (cr, 116.723, 80.098, 116.934, 79.547, 117.387, 79.219);

  cairo_curve_to (cr, 117.676, 79.004, 117.957, 78.938, 118.609, 78.926);

  cairo_line_to (cr, 118.609, 77.969);
  cairo_curve_to (cr, 118.453, 77.949, 118.375, 77.938, 118.25, 77.938);

  cairo_curve_to (cr, 117.645, 77.938, 117.184, 78.297, 116.641, 79.172);

  cairo_line_to (cr, 116.641, 78.105);
  cairo_close_path (cr);
  cairo_move_to (cr, 118.98, 82.828);
  cairo_line_to (cr, 118.98, 84);
  cairo_line_to (cr, 119.652, 84);
  cairo_line_to (cr, 119.652, 84.203);
  cairo_curve_to (cr, 119.652, 84.98, 119.508, 85.203, 118.98, 85.227);

  cairo_line_to (cr, 118.98, 85.652);
  cairo_curve_to (cr, 119.766, 85.652, 120.16, 85.148, 120.16, 84.18);

  cairo_line_to (cr, 120.16, 82.828);
  cairo_close_path (cr);
  cairo_move_to (cr, 125.984, 76.723);
  cairo_line_to (cr, 128.672, 76.723);
  cairo_line_to (cr, 128.672, 75.797);
  cairo_line_to (cr, 122.234, 75.797);
  cairo_line_to (cr, 122.234, 76.723);
  cairo_line_to (cr, 124.938, 76.723);
  cairo_line_to (cr, 124.938, 84);
  cairo_line_to (cr, 125.984, 84);
  cairo_close_path (cr);
  cairo_move_to (cr, 134.02, 83.449);
  cairo_curve_to (cr, 133.918, 83.473, 133.871, 83.473, 133.816, 83.473);

  cairo_curve_to (cr, 133.488, 83.473, 133.309, 83.301, 133.309, 83.012);

  cairo_line_to (cr, 133.309, 79.547);
  cairo_curve_to (cr, 133.309, 78.5, 132.547, 77.938, 131.094, 77.938);

  cairo_curve_to (cr, 130.238, 77.938, 129.531, 78.184, 129.137, 78.621);

  cairo_curve_to (cr, 128.867, 78.926, 128.754, 79.266, 128.73, 79.848);

  cairo_line_to (cr, 129.676, 79.848);
  cairo_curve_to (cr, 129.754, 79.129, 130.184, 78.801, 131.059, 78.801);

  cairo_curve_to (cr, 131.902, 78.801, 132.375, 79.117, 132.375, 79.68);

  cairo_line_to (cr, 132.375, 79.926);
  cairo_curve_to (cr, 132.375, 80.32, 132.141, 80.488, 131.398, 80.578);

  cairo_curve_to (cr, 130.07, 80.75, 129.867, 80.793, 129.508, 80.941);

  cairo_curve_to (cr, 128.82, 81.223, 128.473, 81.75, 128.473, 82.516);

  cairo_curve_to (cr, 128.473, 83.582, 129.215, 84.258, 130.406, 84.258);

  cairo_curve_to (cr, 131.148, 84.258, 131.746, 84, 132.41, 83.391);

  cairo_curve_to (cr, 132.477, 83.988, 132.77, 84.258, 133.379, 84.258);

  cairo_curve_to (cr, 133.57, 84.258, 133.715, 84.234, 134.02, 84.156);

  cairo_close_path (cr);
  cairo_move_to (cr, 132.375, 82.145);
  cairo_curve_to (cr, 132.375, 82.457, 132.285, 82.648, 132.004, 82.91);

  cairo_curve_to (cr, 131.621, 83.258, 131.16, 83.438, 130.609, 83.438);

  cairo_curve_to (cr, 129.879, 83.438, 129.453, 83.09, 129.453, 82.492);

  cairo_curve_to (cr, 129.453, 81.875, 129.867, 81.559, 130.867, 81.414);

  cairo_curve_to (cr, 131.859, 81.277, 132.062, 81.234, 132.375, 81.086);

  cairo_close_path (cr);
  cairo_move_to (cr, 135.789, 78.105);
  cairo_line_to (cr, 135.789, 84);
  cairo_line_to (cr, 136.734, 84);
  cairo_line_to (cr, 136.734, 80.75);
  cairo_curve_to (cr, 136.734, 79.547, 137.363, 78.758, 138.328, 78.758);

  cairo_curve_to (cr, 139.074, 78.758, 139.547, 79.207, 139.547, 79.918);

  cairo_line_to (cr, 139.547, 84);
  cairo_line_to (cr, 140.48, 84);
  cairo_line_to (cr, 140.48, 79.547);
  cairo_curve_to (cr, 140.48, 78.566, 139.746, 77.938, 138.609, 77.938);

  cairo_curve_to (cr, 137.734, 77.938, 137.172, 78.273, 136.652, 79.094);

  cairo_line_to (cr, 136.652, 78.105);
  cairo_close_path (cr);
  cairo_move_to (cr, 140.938, 84.375);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 53 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 22 */
  cairo_move_to (cr, 143.879, 80.004);
  cairo_curve_to (cr, 143.297, 80.184, 142.957, 80.332, 142.621, 80.555);

  cairo_curve_to (cr, 141.879, 81.062, 141.449, 81.852, 141.449, 82.695);

  cairo_curve_to (cr, 141.449, 84.031, 142.52, 85.145, 143.812, 85.145);

  cairo_curve_to (cr, 145.219, 85.145, 146.41, 83.875, 146.41, 82.391);

  cairo_curve_to (cr, 146.41, 81.672, 146.164, 80.973, 145.703, 80.422);

  cairo_curve_to (cr, 145.309, 79.949, 145.129, 79.812, 144.117, 79.207);

  cairo_curve_to (cr, 143.07, 78.566, 142.664, 78.172, 142.664, 77.812);

  cairo_curve_to (cr, 142.664, 77.441, 143.023, 77.148, 143.465, 77.148);

  cairo_curve_to (cr, 143.867, 77.148, 144.117, 77.27, 144.531, 77.699);

  cairo_curve_to (cr, 144.992, 78.172, 145.152, 78.273, 145.434, 78.273);

  cairo_curve_to (cr, 145.734, 78.273, 145.961, 78.059, 145.961, 77.789);

  cairo_curve_to (cr, 145.961, 77.18, 144.984, 76.676, 143.801, 76.676);

  cairo_curve_to (cr, 142.742, 76.676, 142.102, 77.102, 142.102, 77.789);

  cairo_curve_to (cr, 142.102, 78.195, 142.281, 78.52, 142.777, 78.98);

  cairo_close_path (cr);
  cairo_move_to (cr, 144.195, 80.297);
  cairo_curve_to (cr, 144.949, 81.008, 145.309, 81.793, 145.309, 82.762);

  cairo_curve_to (cr, 145.309, 83.863, 144.781, 84.617, 143.992, 84.617);

  cairo_curve_to (cr, 143.203, 84.617, 142.664, 83.738, 142.664, 82.445);

  cairo_curve_to (cr, 142.664, 81.23, 143.172, 80.512, 144.195, 80.297);

  cairo_close_path (cr);
  cairo_move_to (cr, 146.68, 84.938);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 54 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 27 */
  cairo_move_to (cr, 111.441, 80.312);
  cairo_curve_to (cr, 111.156, 81.164, 110.656, 81.5, 109.684, 81.5);

  cairo_curve_to (cr, 109.039, 81.5, 108.496, 81.34, 108.121, 81.016);

  cairo_curve_to (cr, 107.848, 80.773, 107.742, 80.5, 107.742, 80.07);

  cairo_curve_to (cr, 107.742, 79.273, 108.199, 78.762, 108.914, 78.762);

  cairo_curve_to (cr, 109.051, 78.762, 109.172, 78.773, 109.309, 78.801);

  cairo_curve_to (cr, 109.484, 78.84, 109.645, 78.867, 109.781, 78.867);

  cairo_curve_to (cr, 110.184, 78.867, 110.48, 78.68, 110.48, 78.438);

  cairo_curve_to (cr, 110.48, 78.219, 110.32, 78.113, 110.008, 78.113);

  cairo_curve_to (cr, 109.902, 78.113, 109.793, 78.113, 109.551, 78.141);

  cairo_curve_to (cr, 109.105, 78.18, 108.996, 78.191, 108.875, 78.191);

  cairo_curve_to (cr, 108.188, 78.191, 107.742, 77.719, 107.742, 76.992);

  cairo_curve_to (cr, 107.742, 76.195, 108.309, 75.547, 109.012, 75.547);

  cairo_curve_to (cr, 109.496, 75.547, 109.809, 75.762, 109.957, 76.195);

  cairo_curve_to (cr, 110.023, 76.398, 110.062, 76.504, 110.078, 76.531);

  cairo_curve_to (cr, 110.227, 76.828, 110.453, 76.992, 110.727, 76.992);

  cairo_curve_to (cr, 111.074, 76.992, 111.371, 76.695, 111.371, 76.316);

  cairo_curve_to (cr, 111.371, 75.602, 110.453, 75.074, 109.199, 75.074);

  cairo_curve_to (cr, 108.348, 75.074, 107.727, 75.262, 107.203, 75.684);

  cairo_curve_to (cr, 106.715, 76.059, 106.484, 76.477, 106.484, 76.977);

  cairo_curve_to (cr, 106.484, 77.422, 106.688, 77.828, 107.027, 78.086);

  cairo_curve_to (cr, 107.215, 78.207, 107.336, 78.273, 107.754, 78.477);

  cairo_curve_to (cr, 107.215, 78.664, 106.957, 78.812, 106.715, 79.086);

  cairo_curve_to (cr, 106.461, 79.367, 106.297, 79.785, 106.297, 80.176);

  cairo_curve_to (cr, 106.297, 81.34, 107.484, 82.176, 109.16, 82.176);

  cairo_curve_to (cr, 110.656, 82.176, 111.496, 81.621, 111.766, 80.434);

  cairo_close_path (cr);
  cairo_move_to (cr, 112.176, 82.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 55 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 86, 63);
  cairo_line_to (cr, 104, 63);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 56 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 81.5, 63);
  cairo_line_to (cr, 86, 61.312);
  cairo_line_to (cr, 86, 64.688);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 57 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 81.5, 63);
  cairo_line_to (cr, 86, 61.312);
  cairo_line_to (cr, 86, 64.688);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 58 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 108.5, 63);
  cairo_line_to (cr, 104, 64.688);
  cairo_line_to (cr, 104, 61.312);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 59 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 108.5, 63);
  cairo_line_to (cr, 104, 64.688);
  cairo_line_to (cr, 104, 61.312);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 60 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 108.5, 58.5);
  cairo_line_to (cr, 108.5, 67.5);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 61 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 81.5, 58.5);
  cairo_line_to (cr, 81.5, 67.5);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 62 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 14 */
  cairo_move_to (cr, 96.371, 78);
  cairo_line_to (cr, 98.453, 69.797);
  cairo_line_to (cr, 97.281, 69.797);
  cairo_line_to (cr, 95.773, 76.457);
  cairo_line_to (cr, 93.906, 69.797);
  cairo_line_to (cr, 92.781, 69.797);
  cairo_line_to (cr, 90.957, 76.457);
  cairo_line_to (cr, 89.418, 69.797);
  cairo_line_to (cr, 88.246, 69.797);
  cairo_line_to (cr, 90.352, 78);
  cairo_line_to (cr, 91.5, 78);
  cairo_line_to (cr, 93.332, 71.262);
  cairo_line_to (cr, 95.223, 78);
  cairo_close_path (cr);
  cairo_move_to (cr, 98.867, 77.625);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 63 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 63.5, 63);
  cairo_line_to (cr, 77, 63);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 64 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 59, 63);
  cairo_line_to (cr, 63.5, 61.312);
  cairo_line_to (cr, 63.5, 64.688);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 65 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 59, 63);
  cairo_line_to (cr, 63.5, 61.312);
  cairo_line_to (cr, 63.5, 64.688);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 66 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 81.5, 63);
  cairo_line_to (cr, 77, 64.688);
  cairo_line_to (cr, 77, 61.312);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 67 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 81.5, 63);
  cairo_line_to (cr, 77, 64.688);
  cairo_line_to (cr, 77, 61.312);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 68 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 21 */
  cairo_move_to (cr, 72.703, 72.207);
  cairo_curve_to (cr, 72.695, 70.598, 71.59, 69.664, 69.703, 69.664);

  cairo_curve_to (cr, 67.902, 69.664, 66.789, 70.586, 66.789, 72.07);

  cairo_curve_to (cr, 66.789, 73.074, 67.316, 73.703, 68.395, 73.984);

  cairo_line_to (cr, 70.434, 74.523);
  cairo_curve_to (cr, 71.469, 74.793, 71.941, 75.211, 71.941, 75.852);

  cairo_curve_to (cr, 71.941, 76.289, 71.703, 76.738, 71.355, 76.988);

  cairo_curve_to (cr, 71.027, 77.211, 70.512, 77.336, 69.848, 77.336);

  cairo_curve_to (cr, 68.957, 77.336, 68.352, 77.121, 67.957, 76.648);

  cairo_curve_to (cr, 67.652, 76.289, 67.52, 75.895, 67.531, 75.391);

  cairo_line_to (cr, 66.539, 75.391);
  cairo_curve_to (cr, 66.551, 76.145, 66.699, 76.641, 67.023, 77.09);

  cairo_curve_to (cr, 67.586, 77.855, 68.531, 78.258, 69.781, 78.258);

  cairo_curve_to (cr, 70.758, 78.258, 71.559, 78.035, 72.086, 77.629);

  cairo_curve_to (cr, 72.637, 77.191, 72.984, 76.457, 72.984, 75.75);

  cairo_curve_to (cr, 72.984, 74.738, 72.355, 73.996, 71.242, 73.691);

  cairo_line_to (cr, 69.184, 73.141);
  cairo_curve_to (cr, 68.195, 72.871, 67.832, 72.555, 67.832, 71.926);

  cairo_curve_to (cr, 67.832, 71.094, 68.566, 70.543, 69.668, 70.543);

  cairo_curve_to (cr, 70.973, 70.543, 71.703, 71.137, 71.715, 72.207);

  cairo_close_path (cr);
  cairo_move_to (cr, 73.25, 77.625);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 69 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 6 */
  cairo_move_to (cr, 0.5, 54);
  cairo_line_to (cr, 0.5, 90);
  cairo_line_to (cr, 149, 90);
  cairo_line_to (cr, 203, 54);
  cairo_line_to (cr, 203, 18);
  cairo_line_to (cr, 149, 54);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 70 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 54);
  cairo_line_to (cr, 54.5, 18);
  cairo_line_to (cr, 203, 18);
  cairo_line_to (cr, 149, 54);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 71 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 32, 45);
  cairo_line_to (cr, 59, 45);
  cairo_line_to (cr, 59, 54);
  cairo_line_to (cr, 32, 54);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 72 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 32, 45);
  cairo_line_to (cr, 59, 45);
  cairo_line_to (cr, 59, 54);
  cairo_line_to (cr, 32, 54);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 73 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 59, 45);
  cairo_line_to (cr, 59, 54);
  cairo_line_to (cr, 117.5, 18);
  cairo_line_to (cr, 117.5, 9);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 74 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 59, 45);
  cairo_line_to (cr, 59, 54);
  cairo_line_to (cr, 117.5, 18);
  cairo_line_to (cr, 117.5, 9);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 75 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 59, 45);
  cairo_line_to (cr, 117.5, 9);
  cairo_line_to (cr, 90.5, 9);
  cairo_line_to (cr, 32, 45);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 76 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 59, 45);
  cairo_line_to (cr, 117.5, 9);
  cairo_line_to (cr, 90.5, 9);
  cairo_line_to (cr, 32, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 77 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 81.5, 45);
  cairo_line_to (cr, 108.5, 45);
  cairo_line_to (cr, 108.5, 54);
  cairo_line_to (cr, 81.5, 54);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 78 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 81.5, 45);
  cairo_line_to (cr, 108.5, 45);
  cairo_line_to (cr, 108.5, 54);
  cairo_line_to (cr, 81.5, 54);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 79 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 108.5, 45);
  cairo_line_to (cr, 108.5, 54);
  cairo_line_to (cr, 167, 18);
  cairo_line_to (cr, 167, 9);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 80 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 108.5, 45);
  cairo_line_to (cr, 108.5, 54);
  cairo_line_to (cr, 167, 18);
  cairo_line_to (cr, 167, 9);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 81 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 108.5, 45);
  cairo_line_to (cr, 167, 9);
  cairo_line_to (cr, 140, 9);
  cairo_line_to (cr, 81.5, 45);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 82 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 108.5, 45);
  cairo_line_to (cr, 167, 9);
  cairo_line_to (cr, 140, 9);
  cairo_line_to (cr, 81.5, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 83 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 32, 45);
  cairo_line_to (cr, 59, 45);
  cairo_line_to (cr, 59, 54);
  cairo_line_to (cr, 32, 54);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 84 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 59, 45);
  cairo_line_to (cr, 59, 54);
  cairo_line_to (cr, 117.5, 18);
  cairo_line_to (cr, 117.5, 9);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 85 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 59, 45);
  cairo_line_to (cr, 117.5, 9);
  cairo_line_to (cr, 90.5, 9);
  cairo_line_to (cr, 32, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 86 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 81.5, 45);
  cairo_line_to (cr, 108.5, 45);
  cairo_line_to (cr, 108.5, 54);
  cairo_line_to (cr, 81.5, 54);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 87 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 108.5, 45);
  cairo_line_to (cr, 108.5, 54);
  cairo_line_to (cr, 167, 18);
  cairo_line_to (cr, 167, 9);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 88 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 108.5, 45);
  cairo_line_to (cr, 167, 9);
  cairo_line_to (cr, 140, 9);
  cairo_line_to (cr, 81.5, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 89 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 90);
  cairo_line_to (cr, 149, 90);
  cairo_line_to (cr, 149, 99);
  cairo_line_to (cr, 0.5, 99);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 90 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 149, 90);
  cairo_line_to (cr, 203, 54);
  cairo_line_to (cr, 203, 63);
  cairo_line_to (cr, 149, 99);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 91 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 68 */
  cairo_move_to (cr, 115.777, 78.105);
  cairo_line_to (cr, 115.777, 84);
  cairo_line_to (cr, 116.723, 84);
  cairo_line_to (cr, 116.723, 80.941);
  cairo_curve_to (cr, 116.723, 80.098, 116.934, 79.547, 117.387, 79.219);

  cairo_curve_to (cr, 117.676, 79.004, 117.957, 78.938, 118.609, 78.926);

  cairo_line_to (cr, 118.609, 77.969);
  cairo_curve_to (cr, 118.453, 77.949, 118.375, 77.938, 118.25, 77.938);

  cairo_curve_to (cr, 117.645, 77.938, 117.184, 78.297, 116.641, 79.172);

  cairo_line_to (cr, 116.641, 78.105);
  cairo_close_path (cr);
  cairo_move_to (cr, 118.98, 82.828);
  cairo_line_to (cr, 118.98, 84);
  cairo_line_to (cr, 119.652, 84);
  cairo_line_to (cr, 119.652, 84.203);
  cairo_curve_to (cr, 119.652, 84.98, 119.508, 85.203, 118.98, 85.227);

  cairo_line_to (cr, 118.98, 85.652);
  cairo_curve_to (cr, 119.766, 85.652, 120.16, 85.148, 120.16, 84.18);

  cairo_line_to (cr, 120.16, 82.828);
  cairo_close_path (cr);
  cairo_move_to (cr, 125.984, 76.723);
  cairo_line_to (cr, 128.672, 76.723);
  cairo_line_to (cr, 128.672, 75.797);
  cairo_line_to (cr, 122.234, 75.797);
  cairo_line_to (cr, 122.234, 76.723);
  cairo_line_to (cr, 124.938, 76.723);
  cairo_line_to (cr, 124.938, 84);
  cairo_line_to (cr, 125.984, 84);
  cairo_close_path (cr);
  cairo_move_to (cr, 134.02, 83.449);
  cairo_curve_to (cr, 133.918, 83.473, 133.871, 83.473, 133.816, 83.473);

  cairo_curve_to (cr, 133.488, 83.473, 133.309, 83.301, 133.309, 83.012);

  cairo_line_to (cr, 133.309, 79.547);
  cairo_curve_to (cr, 133.309, 78.5, 132.547, 77.938, 131.094, 77.938);

  cairo_curve_to (cr, 130.238, 77.938, 129.531, 78.184, 129.137, 78.621);

  cairo_curve_to (cr, 128.867, 78.926, 128.754, 79.266, 128.73, 79.848);

  cairo_line_to (cr, 129.676, 79.848);
  cairo_curve_to (cr, 129.754, 79.129, 130.184, 78.801, 131.059, 78.801);

  cairo_curve_to (cr, 131.902, 78.801, 132.375, 79.117, 132.375, 79.68);

  cairo_line_to (cr, 132.375, 79.926);
  cairo_curve_to (cr, 132.375, 80.32, 132.141, 80.488, 131.398, 80.578);

  cairo_curve_to (cr, 130.07, 80.75, 129.867, 80.793, 129.508, 80.941);

  cairo_curve_to (cr, 128.82, 81.223, 128.473, 81.75, 128.473, 82.516);

  cairo_curve_to (cr, 128.473, 83.582, 129.215, 84.258, 130.406, 84.258);

  cairo_curve_to (cr, 131.148, 84.258, 131.746, 84, 132.41, 83.391);

  cairo_curve_to (cr, 132.477, 83.988, 132.77, 84.258, 133.379, 84.258);

  cairo_curve_to (cr, 133.57, 84.258, 133.715, 84.234, 134.02, 84.156);

  cairo_close_path (cr);
  cairo_move_to (cr, 132.375, 82.145);
  cairo_curve_to (cr, 132.375, 82.457, 132.285, 82.648, 132.004, 82.91);

  cairo_curve_to (cr, 131.621, 83.258, 131.16, 83.438, 130.609, 83.438);

  cairo_curve_to (cr, 129.879, 83.438, 129.453, 83.09, 129.453, 82.492);

  cairo_curve_to (cr, 129.453, 81.875, 129.867, 81.559, 130.867, 81.414);

  cairo_curve_to (cr, 131.859, 81.277, 132.062, 81.234, 132.375, 81.086);

  cairo_close_path (cr);
  cairo_move_to (cr, 135.789, 78.105);
  cairo_line_to (cr, 135.789, 84);
  cairo_line_to (cr, 136.734, 84);
  cairo_line_to (cr, 136.734, 80.75);
  cairo_curve_to (cr, 136.734, 79.547, 137.363, 78.758, 138.328, 78.758);

  cairo_curve_to (cr, 139.074, 78.758, 139.547, 79.207, 139.547, 79.918);

  cairo_line_to (cr, 139.547, 84);
  cairo_line_to (cr, 140.48, 84);
  cairo_line_to (cr, 140.48, 79.547);
  cairo_curve_to (cr, 140.48, 78.566, 139.746, 77.938, 138.609, 77.938);

  cairo_curve_to (cr, 137.734, 77.938, 137.172, 78.273, 136.652, 79.094);

  cairo_line_to (cr, 136.652, 78.105);
  cairo_close_path (cr);
  cairo_move_to (cr, 140.938, 84.375);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);
  cairo_restore (cr);

  return cr;
} /* end of figure_coupled_microstrip_page_1_render() */

/* Total number of pages */
int figure_coupled_microstrip_total_pages;

/* Array of the individual page render functions */
cairo_t * (*figure_coupled_microstrip_render[1])(cairo_surface_t *, cairo_t *);

/* array of pointers to the widths and heights */
int figure_coupled_microstrip_width[1];
int figure_coupled_microstrip_height[1];

/* This function should be called at the beginning of the user program */
void figure_coupled_microstrip_init(void)
{

  figure_coupled_microstrip_total_pages = 1;

  figure_coupled_microstrip_render[0] = figure_coupled_microstrip_page_1_render;

  figure_coupled_microstrip_width[0] = figure_coupled_microstrip_page_1_width;
  figure_coupled_microstrip_height[0] = figure_coupled_microstrip_page_1_height;
}

float figure_coupled_microstrip_width_max = 210;
float figure_coupled_microstrip_height_max = 103;
