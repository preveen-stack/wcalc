/* ***** Generated from pstoedit ***** */
#include <cairo.h>
#include <stdio.h>

/*
 * Original bounding box = for page # 1 is
 * LL: x: 103 y: 671 UR: x: 346 y: 765
 * The figure has been offset by (-103, 765)
 * to move LL to (0,0).  The width and height
 * can be read from the following two variables:
 */
static int figure_coupled_stripline_page_1_width = 243;
static int figure_coupled_stripline_page_1_height = 94;

static cairo_t * figure_coupled_stripline_page_1_render(cairo_surface_t *cs, cairo_t *cr)
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
  cairo_move_to (cr, 5, 81);
  cairo_line_to (cr, 149, 81);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 2 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 6 */
  cairo_move_to (cr, 0.5, 45);
  cairo_line_to (cr, 0.5, 81);
  cairo_line_to (cr, 189.5, 81);
  cairo_line_to (cr, 243.5, 45);
  cairo_line_to (cr, 243.5, 9);
  cairo_line_to (cr, 189.5, 45);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 3 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 6 */
  cairo_move_to (cr, 0.5, 45);
  cairo_line_to (cr, 0.5, 81);
  cairo_line_to (cr, 189.5, 81);
  cairo_line_to (cr, 243.5, 45);
  cairo_line_to (cr, 243.5, 9);
  cairo_line_to (cr, 189.5, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
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
  cairo_move_to (cr, 189.5, 45);
  cairo_line_to (cr, 189.5, 81);
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
  cairo_move_to (cr, 11.75, 49.5);
  cairo_line_to (cr, 11.75, 76.5);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 6 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 11.75, 45);
  cairo_line_to (cr, 13.438, 49.5);
  cairo_line_to (cr, 10.062, 49.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 7 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 11.75, 45);
  cairo_line_to (cr, 13.438, 49.5);
  cairo_line_to (cr, 10.062, 49.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 8 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 11.75, 81);
  cairo_line_to (cr, 10.062, 76.5);
  cairo_line_to (cr, 13.438, 76.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 9 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 11.75, 81);
  cairo_line_to (cr, 10.062, 76.5);
  cairo_line_to (cr, 13.438, 76.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 10 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 13 */
  cairo_move_to (cr, 9.199, 67.266);
  cairo_line_to (cr, 9.199, 71);
  cairo_line_to (cr, 10.246, 71);
  cairo_line_to (cr, 10.246, 62.797);
  cairo_line_to (cr, 9.199, 62.797);
  cairo_line_to (cr, 9.199, 66.344);
  cairo_line_to (cr, 4.98, 66.344);
  cairo_line_to (cr, 4.98, 62.797);
  cairo_line_to (cr, 3.934, 62.797);
  cairo_line_to (cr, 3.934, 71);
  cairo_line_to (cr, 4.992, 71);
  cairo_line_to (cr, 4.992, 67.266);
  cairo_close_path (cr);
  cairo_move_to (cr, 10.871, 70.875);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 11 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 207.5, 85.5);
  cairo_line_to (cr, 216.5, 85.5);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 12 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 203, 85.5);
  cairo_line_to (cr, 207.5, 83.812);
  cairo_line_to (cr, 207.5, 87.188);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 13 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 203, 85.5);
  cairo_line_to (cr, 207.5, 83.812);
  cairo_line_to (cr, 207.5, 87.188);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
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
  cairo_move_to (cr, 215.938, 80.438);
  cairo_line_to (cr, 240.688, 80.438);
  cairo_line_to (cr, 240.688, 93.375);
  cairo_line_to (cr, 215.938, 93.375);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 15 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 42 */
  cairo_move_to (cr, 224.977, 86.668);
  cairo_line_to (cr, 221.555, 86.668);
  cairo_line_to (cr, 221.555, 87.59);
  cairo_line_to (cr, 224.055, 87.59);
  cairo_line_to (cr, 224.055, 87.816);
  cairo_curve_to (cr, 224.055, 89.277, 222.973, 90.336, 221.477, 90.336);

  cairo_curve_to (cr, 220.645, 90.336, 219.891, 90.031, 219.406, 89.504);

  cairo_curve_to (cr, 218.867, 88.918, 218.543, 87.941, 218.543, 86.926);

  cairo_curve_to (cr, 218.543, 84.914, 219.688, 83.586, 221.422, 83.586);

  cairo_curve_to (cr, 222.672, 83.586, 223.57, 84.227, 223.797, 85.285);

  cairo_line_to (cr, 224.863, 85.285);
  cairo_curve_to (cr, 224.57, 83.621, 223.312, 82.664, 221.434, 82.664);

  cairo_curve_to (cr, 220.43, 82.664, 219.621, 82.922, 218.98, 83.453);

  cairo_curve_to (cr, 218.035, 84.238, 217.496, 85.512, 217.496, 86.984);

  cairo_curve_to (cr, 217.496, 89.504, 219.035, 91.258, 221.254, 91.258);

  cairo_curve_to (cr, 222.367, 91.258, 223.254, 90.844, 224.055, 89.953);

  cairo_line_to (cr, 224.312, 91.047);
  cairo_line_to (cr, 224.977, 91.047);
  cairo_close_path (cr);
  cairo_move_to (cr, 232.266, 82.797);
  cairo_line_to (cr, 231.277, 82.797);
  cairo_line_to (cr, 231.277, 89.504);
  cairo_line_to (cr, 226.992, 82.797);
  cairo_line_to (cr, 225.855, 82.797);
  cairo_line_to (cr, 225.855, 91);
  cairo_line_to (cr, 226.844, 91);
  cairo_line_to (cr, 226.844, 84.352);
  cairo_line_to (cr, 231.086, 91);
  cairo_line_to (cr, 232.266, 91);
  cairo_close_path (cr);
  cairo_move_to (cr, 234, 91);
  cairo_line_to (cr, 237.164, 91);
  cairo_curve_to (cr, 239.234, 91, 240.504, 89.449, 240.504, 86.895);

  cairo_curve_to (cr, 240.504, 84.352, 239.242, 82.797, 237.164, 82.797);

  cairo_line_to (cr, 234, 82.797);
  cairo_close_path (cr);
  cairo_move_to (cr, 235.047, 90.078);
  cairo_line_to (cr, 235.047, 83.723);
  cairo_line_to (cr, 236.984, 83.723);
  cairo_curve_to (cr, 238.602, 83.723, 239.457, 84.812, 239.457, 86.906);

  cairo_curve_to (cr, 239.457, 88.977, 238.602, 90.078, 236.984, 90.078);

  cairo_close_path (cr);
  cairo_move_to (cr, 241.492, 91.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 16 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 59, 63);
  cairo_line_to (cr, 86, 63);
  cairo_line_to (cr, 86, 72);
  cairo_line_to (cr, 59, 72);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 17 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 59, 63);
  cairo_line_to (cr, 86, 63);
  cairo_line_to (cr, 86, 72);
  cairo_line_to (cr, 59, 72);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 18 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 86, 63);
  cairo_line_to (cr, 86, 72);
  cairo_line_to (cr, 144.5, 36);
  cairo_line_to (cr, 144.5, 27);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 19 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 86, 63);
  cairo_line_to (cr, 86, 72);
  cairo_line_to (cr, 144.5, 36);
  cairo_line_to (cr, 144.5, 27);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 20 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 86, 63);
  cairo_line_to (cr, 144.5, 27);
  cairo_line_to (cr, 117.5, 27);
  cairo_line_to (cr, 59, 63);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 21 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 86, 63);
  cairo_line_to (cr, 144.5, 27);
  cairo_line_to (cr, 117.5, 27);
  cairo_line_to (cr, 59, 63);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 22 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 47.75, 72);
  cairo_line_to (cr, 56.75, 72);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 23 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 52.25, 58.5);
  cairo_line_to (cr, 52.25, 56.25);
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
  cairo_move_to (cr, 52.25, 63);
  cairo_line_to (cr, 50.562, 58.5);
  cairo_line_to (cr, 53.938, 58.5);
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
  cairo_move_to (cr, 52.25, 63);
  cairo_line_to (cr, 50.562, 58.5);
  cairo_line_to (cr, 53.938, 58.5);
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
  cairo_move_to (cr, 52.25, 76.5);
  cairo_line_to (cr, 52.25, 78.75);
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
  cairo_move_to (cr, 52.25, 72);
  cairo_line_to (cr, 53.938, 76.5);
  cairo_line_to (cr, 50.562, 76.5);
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
  cairo_move_to (cr, 52.25, 72);
  cairo_line_to (cr, 53.938, 76.5);
  cairo_line_to (cr, 50.562, 76.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 29 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 47.75, 63);
  cairo_line_to (cr, 56.75, 63);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 30 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 62 */
  cairo_move_to (cr, 24.984, 63.723);
  cairo_line_to (cr, 27.672, 63.723);
  cairo_line_to (cr, 27.672, 62.797);
  cairo_line_to (cr, 21.234, 62.797);
  cairo_line_to (cr, 21.234, 63.723);
  cairo_line_to (cr, 23.938, 63.723);
  cairo_line_to (cr, 23.938, 71);
  cairo_line_to (cr, 24.984, 71);
  cairo_close_path (cr);
  cairo_move_to (cr, 28.789, 65.105);
  cairo_line_to (cr, 28.789, 71);
  cairo_line_to (cr, 29.734, 71);
  cairo_line_to (cr, 29.734, 67.297);
  cairo_curve_to (cr, 29.734, 66.445, 30.352, 65.758, 31.117, 65.758);

  cairo_curve_to (cr, 31.812, 65.758, 32.207, 66.184, 32.207, 66.938);

  cairo_line_to (cr, 32.207, 71);
  cairo_line_to (cr, 33.152, 71);
  cairo_line_to (cr, 33.152, 67.297);
  cairo_curve_to (cr, 33.152, 66.445, 33.77, 65.758, 34.535, 65.758);

  cairo_curve_to (cr, 35.223, 65.758, 35.629, 66.195, 35.629, 66.938);

  cairo_line_to (cr, 35.629, 71);
  cairo_line_to (cr, 36.574, 71);
  cairo_line_to (cr, 36.574, 66.578);
  cairo_curve_to (cr, 36.574, 65.52, 35.965, 64.938, 34.863, 64.938);

  cairo_curve_to (cr, 34.074, 64.938, 33.602, 65.172, 33.051, 65.836);

  cairo_curve_to (cr, 32.703, 65.207, 32.23, 64.938, 31.465, 64.938);

  cairo_curve_to (cr, 30.676, 64.938, 30.16, 65.23, 29.652, 65.938);

  cairo_line_to (cr, 29.652, 65.105);
  cairo_close_path (cr);
  cairo_move_to (cr, 42.77, 68.367);
  cairo_curve_to (cr, 42.77, 67.469, 42.703, 66.926, 42.535, 66.488);

  cairo_curve_to (cr, 42.152, 65.52, 41.254, 64.938, 40.148, 64.938);

  cairo_curve_to (cr, 38.508, 64.938, 37.449, 66.195, 37.449, 68.133);

  cairo_curve_to (cr, 37.449, 70.066, 38.473, 71.258, 40.129, 71.258);

  cairo_curve_to (cr, 41.477, 71.258, 42.41, 70.492, 42.648, 69.211);

  cairo_line_to (cr, 41.703, 69.211);
  cairo_curve_to (cr, 41.445, 69.988, 40.914, 70.391, 40.16, 70.391);

  cairo_curve_to (cr, 39.566, 70.391, 39.059, 70.121, 38.742, 69.629);

  cairo_curve_to (cr, 38.52, 69.289, 38.441, 68.953, 38.43, 68.367);

  cairo_close_path (cr);
  cairo_move_to (cr, 38.453, 67.602);
  cairo_curve_to (cr, 38.531, 66.512, 39.195, 65.801, 40.141, 65.801);

  cairo_curve_to (cr, 41.062, 65.801, 41.77, 66.566, 41.77, 67.535);

  cairo_curve_to (cr, 41.77, 67.559, 41.77, 67.578, 41.758, 67.602);

  cairo_close_path (cr);
  cairo_move_to (cr, 45.859, 65.105);
  cairo_line_to (cr, 44.891, 65.105);
  cairo_line_to (cr, 44.891, 63.484);
  cairo_line_to (cr, 43.957, 63.484);
  cairo_line_to (cr, 43.957, 65.105);
  cairo_line_to (cr, 43.156, 65.105);
  cairo_line_to (cr, 43.156, 65.871);
  cairo_line_to (cr, 43.957, 65.871);
  cairo_line_to (cr, 43.957, 70.324);
  cairo_curve_to (cr, 43.957, 70.922, 44.359, 71.258, 45.094, 71.258);

  cairo_curve_to (cr, 45.316, 71.258, 45.543, 71.234, 45.859, 71.18);

  cairo_line_to (cr, 45.859, 70.391);
  cairo_curve_to (cr, 45.734, 70.426, 45.586, 70.438, 45.406, 70.438);

  cairo_curve_to (cr, 45.004, 70.438, 44.891, 70.324, 44.891, 69.91);

  cairo_line_to (cr, 44.891, 65.871);
  cairo_line_to (cr, 45.859, 65.871);
  cairo_close_path (cr);
  cairo_move_to (cr, 46.371, 70.875);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 31 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 27 */
  cairo_move_to (cr, 160.535, 71.594);
  cairo_curve_to (cr, 160.297, 72.301, 159.883, 72.582, 159.07, 72.582);

  cairo_curve_to (cr, 158.531, 72.582, 158.082, 72.449, 157.766, 72.18);

  cairo_curve_to (cr, 157.543, 71.977, 157.453, 71.75, 157.453, 71.391);

  cairo_curve_to (cr, 157.453, 70.727, 157.832, 70.301, 158.43, 70.301);

  cairo_curve_to (cr, 158.543, 70.301, 158.645, 70.312, 158.758, 70.332);

  cairo_curve_to (cr, 158.902, 70.367, 159.039, 70.391, 159.148, 70.391);

  cairo_curve_to (cr, 159.488, 70.391, 159.734, 70.234, 159.734, 70.031);

  cairo_curve_to (cr, 159.734, 69.852, 159.602, 69.762, 159.34, 69.762);

  cairo_curve_to (cr, 159.25, 69.762, 159.16, 69.762, 158.957, 69.781);

  cairo_curve_to (cr, 158.586, 69.816, 158.496, 69.828, 158.395, 69.828);

  cairo_curve_to (cr, 157.824, 69.828, 157.453, 69.434, 157.453, 68.828);

  cairo_curve_to (cr, 157.453, 68.164, 157.922, 67.621, 158.508, 67.621);

  cairo_curve_to (cr, 158.914, 67.621, 159.172, 67.801, 159.297, 68.164);

  cairo_curve_to (cr, 159.352, 68.332, 159.387, 68.422, 159.398, 68.445);

  cairo_curve_to (cr, 159.52, 68.691, 159.711, 68.828, 159.938, 68.828);

  cairo_curve_to (cr, 160.23, 68.828, 160.477, 68.578, 160.477, 68.266);

  cairo_curve_to (cr, 160.477, 67.668, 159.711, 67.23, 158.668, 67.23);

  cairo_curve_to (cr, 157.957, 67.23, 157.441, 67.387, 157, 67.734);

  cairo_curve_to (cr, 156.598, 68.051, 156.406, 68.398, 156.406, 68.816);

  cairo_curve_to (cr, 156.406, 69.188, 156.574, 69.523, 156.855, 69.738);

  cairo_curve_to (cr, 157.012, 69.84, 157.113, 69.895, 157.461, 70.062);

  cairo_curve_to (cr, 157.012, 70.223, 156.797, 70.344, 156.598, 70.57);

  cairo_curve_to (cr, 156.383, 70.805, 156.246, 71.156, 156.246, 71.48);

  cairo_curve_to (cr, 156.246, 72.449, 157.238, 73.145, 158.633, 73.145);

  cairo_curve_to (cr, 159.883, 73.145, 160.578, 72.684, 160.805, 71.695);

  cairo_close_path (cr);
  cairo_move_to (cr, 160.688, 73.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 32 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 11 */
  cairo_move_to (cr, 161.465, 71.465);
  cairo_line_to (cr, 161.465, 75);
  cairo_line_to (cr, 162.031, 75);
  cairo_line_to (cr, 162.031, 73.164);
  cairo_curve_to (cr, 162.031, 72.656, 162.16, 72.328, 162.43, 72.133);

  cairo_curve_to (cr, 162.605, 72.004, 162.773, 71.961, 163.168, 71.957);

  cairo_line_to (cr, 163.168, 71.383);
  cairo_curve_to (cr, 163.07, 71.367, 163.023, 71.363, 162.949, 71.363);

  cairo_curve_to (cr, 162.586, 71.363, 162.309, 71.578, 161.984, 72.105);

  cairo_line_to (cr, 161.984, 71.465);
  cairo_close_path (cr);
  cairo_move_to (cr, 162.934, 75.375);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 33 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 65 */
  cairo_move_to (cr, 163.98, 71.828);
  cairo_line_to (cr, 163.98, 73);
  cairo_line_to (cr, 164.652, 73);
  cairo_line_to (cr, 164.652, 73.203);
  cairo_curve_to (cr, 164.652, 73.98, 164.508, 74.203, 163.98, 74.227);

  cairo_line_to (cr, 163.98, 74.652);
  cairo_curve_to (cr, 164.766, 74.652, 165.16, 74.148, 165.16, 73.18);

  cairo_line_to (cr, 165.16, 71.828);
  cairo_close_path (cr);
  cairo_move_to (cr, 168.859, 67.105);
  cairo_line_to (cr, 167.891, 67.105);
  cairo_line_to (cr, 167.891, 65.484);
  cairo_line_to (cr, 166.957, 65.484);
  cairo_line_to (cr, 166.957, 67.105);
  cairo_line_to (cr, 166.156, 67.105);
  cairo_line_to (cr, 166.156, 67.871);
  cairo_line_to (cr, 166.957, 67.871);
  cairo_line_to (cr, 166.957, 72.324);
  cairo_curve_to (cr, 166.957, 72.922, 167.359, 73.258, 168.094, 73.258);

  cairo_curve_to (cr, 168.316, 73.258, 168.543, 73.234, 168.859, 73.18);

  cairo_line_to (cr, 168.859, 72.391);
  cairo_curve_to (cr, 168.734, 72.426, 168.586, 72.438, 168.406, 72.438);

  cairo_curve_to (cr, 168.004, 72.438, 167.891, 72.324, 167.891, 71.91);

  cairo_line_to (cr, 167.891, 67.871);
  cairo_line_to (cr, 168.859, 67.871);
  cairo_close_path (cr);
  cairo_move_to (cr, 175.02, 72.449);
  cairo_curve_to (cr, 174.918, 72.473, 174.871, 72.473, 174.816, 72.473);

  cairo_curve_to (cr, 174.488, 72.473, 174.309, 72.301, 174.309, 72.012);

  cairo_line_to (cr, 174.309, 68.547);
  cairo_curve_to (cr, 174.309, 67.5, 173.547, 66.938, 172.094, 66.938);

  cairo_curve_to (cr, 171.238, 66.938, 170.531, 67.184, 170.137, 67.621);

  cairo_curve_to (cr, 169.867, 67.926, 169.754, 68.266, 169.73, 68.848);

  cairo_line_to (cr, 170.676, 68.848);
  cairo_curve_to (cr, 170.754, 68.129, 171.184, 67.801, 172.059, 67.801);

  cairo_curve_to (cr, 172.902, 67.801, 173.375, 68.117, 173.375, 68.68);

  cairo_line_to (cr, 173.375, 68.926);
  cairo_curve_to (cr, 173.375, 69.32, 173.141, 69.488, 172.398, 69.578);

  cairo_curve_to (cr, 171.07, 69.75, 170.867, 69.793, 170.508, 69.941);

  cairo_curve_to (cr, 169.82, 70.223, 169.473, 70.75, 169.473, 71.516);

  cairo_curve_to (cr, 169.473, 72.582, 170.215, 73.258, 171.406, 73.258);

  cairo_curve_to (cr, 172.148, 73.258, 172.746, 73, 173.41, 72.391);

  cairo_curve_to (cr, 173.477, 72.988, 173.77, 73.258, 174.379, 73.258);

  cairo_curve_to (cr, 174.57, 73.258, 174.715, 73.234, 175.02, 73.156);

  cairo_close_path (cr);
  cairo_move_to (cr, 173.375, 71.145);
  cairo_curve_to (cr, 173.375, 71.457, 173.285, 71.648, 173.004, 71.91);

  cairo_curve_to (cr, 172.621, 72.258, 172.16, 72.438, 171.609, 72.438);

  cairo_curve_to (cr, 170.879, 72.438, 170.453, 72.09, 170.453, 71.492);

  cairo_curve_to (cr, 170.453, 70.875, 170.867, 70.559, 171.867, 70.414);

  cairo_curve_to (cr, 172.859, 70.277, 173.062, 70.234, 173.375, 70.086);

  cairo_close_path (cr);
  cairo_move_to (cr, 175.789, 67.105);
  cairo_line_to (cr, 175.789, 73);
  cairo_line_to (cr, 176.734, 73);
  cairo_line_to (cr, 176.734, 69.75);
  cairo_curve_to (cr, 176.734, 68.547, 177.363, 67.758, 178.328, 67.758);

  cairo_curve_to (cr, 179.074, 67.758, 179.547, 68.207, 179.547, 68.918);

  cairo_line_to (cr, 179.547, 73);
  cairo_line_to (cr, 180.48, 73);
  cairo_line_to (cr, 180.48, 68.547);
  cairo_curve_to (cr, 180.48, 67.566, 179.746, 66.938, 178.609, 66.938);

  cairo_curve_to (cr, 177.734, 66.938, 177.172, 67.273, 176.652, 68.094);

  cairo_line_to (cr, 176.652, 67.105);
  cairo_close_path (cr);
  cairo_move_to (cr, 181.691, 73.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 34 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 22 */
  cairo_move_to (cr, 184.879, 68.004);
  cairo_curve_to (cr, 184.297, 68.184, 183.957, 68.332, 183.621, 68.555);

  cairo_curve_to (cr, 182.879, 69.062, 182.449, 69.852, 182.449, 70.695);

  cairo_curve_to (cr, 182.449, 72.031, 183.52, 73.145, 184.812, 73.145);

  cairo_curve_to (cr, 186.219, 73.145, 187.41, 71.875, 187.41, 70.391);

  cairo_curve_to (cr, 187.41, 69.672, 187.164, 68.973, 186.703, 68.422);

  cairo_curve_to (cr, 186.309, 67.949, 186.129, 67.812, 185.117, 67.207);

  cairo_curve_to (cr, 184.07, 66.566, 183.664, 66.172, 183.664, 65.812);

  cairo_curve_to (cr, 183.664, 65.441, 184.023, 65.148, 184.465, 65.148);

  cairo_curve_to (cr, 184.867, 65.148, 185.117, 65.27, 185.531, 65.699);

  cairo_curve_to (cr, 185.992, 66.172, 186.152, 66.273, 186.434, 66.273);

  cairo_curve_to (cr, 186.734, 66.273, 186.961, 66.059, 186.961, 65.789);

  cairo_curve_to (cr, 186.961, 65.18, 185.984, 64.676, 184.801, 64.676);

  cairo_curve_to (cr, 183.742, 64.676, 183.102, 65.102, 183.102, 65.789);

  cairo_curve_to (cr, 183.102, 66.195, 183.281, 66.52, 183.777, 66.98);

  cairo_close_path (cr);
  cairo_move_to (cr, 185.195, 68.297);
  cairo_curve_to (cr, 185.949, 69.008, 186.309, 69.793, 186.309, 70.762);

  cairo_curve_to (cr, 186.309, 71.863, 185.781, 72.617, 184.992, 72.617);

  cairo_curve_to (cr, 184.203, 72.617, 183.664, 71.738, 183.664, 70.445);

  cairo_curve_to (cr, 183.664, 69.23, 184.172, 68.512, 185.195, 68.297);

  cairo_close_path (cr);
  cairo_move_to (cr, 187.246, 73.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
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
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 108.5, 63);
  cairo_line_to (cr, 135.5, 63);
  cairo_line_to (cr, 135.5, 72);
  cairo_line_to (cr, 108.5, 72);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 36 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 108.5, 63);
  cairo_line_to (cr, 135.5, 63);
  cairo_line_to (cr, 135.5, 72);
  cairo_line_to (cr, 108.5, 72);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 37 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 135.5, 63);
  cairo_line_to (cr, 135.5, 72);
  cairo_line_to (cr, 194, 36);
  cairo_line_to (cr, 194, 27);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 38 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 135.5, 63);
  cairo_line_to (cr, 135.5, 72);
  cairo_line_to (cr, 194, 36);
  cairo_line_to (cr, 194, 27);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 39 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 135.5, 63);
  cairo_line_to (cr, 194, 27);
  cairo_line_to (cr, 167, 27);
  cairo_line_to (cr, 108.5, 63);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 40 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 135.5, 63);
  cairo_line_to (cr, 194, 27);
  cairo_line_to (cr, 167, 27);
  cairo_line_to (cr, 108.5, 63);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 41 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 59, 63);
  cairo_line_to (cr, 86, 63);
  cairo_line_to (cr, 86, 72);
  cairo_line_to (cr, 59, 72);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 42 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 86, 63);
  cairo_line_to (cr, 86, 72);
  cairo_line_to (cr, 144.5, 36);
  cairo_line_to (cr, 144.5, 27);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 43 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 86, 63);
  cairo_line_to (cr, 144.5, 27);
  cairo_line_to (cr, 117.5, 27);
  cairo_line_to (cr, 59, 63);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 44 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 108.5, 63);
  cairo_line_to (cr, 135.5, 63);
  cairo_line_to (cr, 135.5, 72);
  cairo_line_to (cr, 108.5, 72);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 45 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 135.5, 63);
  cairo_line_to (cr, 135.5, 72);
  cairo_line_to (cr, 194, 36);
  cairo_line_to (cr, 194, 27);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 46 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 135.5, 63);
  cairo_line_to (cr, 194, 27);
  cairo_line_to (cr, 167, 27);
  cairo_line_to (cr, 108.5, 63);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 47 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 36);
  cairo_line_to (cr, 54.5, 0);
  cairo_line_to (cr, 243.5, 0);
  cairo_line_to (cr, 189.5, 36);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 48 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 36);
  cairo_line_to (cr, 54.5, 0);
  cairo_line_to (cr, 243.5, 0);
  cairo_line_to (cr, 189.5, 36);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 49 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 36);
  cairo_line_to (cr, 189.5, 36);
  cairo_line_to (cr, 189.5, 45);
  cairo_line_to (cr, 0.5, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 50 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 36);
  cairo_line_to (cr, 189.5, 36);
  cairo_line_to (cr, 189.5, 45);
  cairo_line_to (cr, 0.5, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 51 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 189.5, 36);
  cairo_line_to (cr, 243.5, 0);
  cairo_line_to (cr, 243.5, 9);
  cairo_line_to (cr, 189.5, 45);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 52 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 189.5, 36);
  cairo_line_to (cr, 243.5, 0);
  cairo_line_to (cr, 243.5, 9);
  cairo_line_to (cr, 189.5, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 53 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 36);
  cairo_line_to (cr, 54.5, 0);
  cairo_line_to (cr, 243.5, 0);
  cairo_line_to (cr, 189.5, 36);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 54 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 36);
  cairo_line_to (cr, 189.5, 36);
  cairo_line_to (cr, 189.5, 45);
  cairo_line_to (cr, 0.5, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 55 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 189.5, 36);
  cairo_line_to (cr, 243.5, 0);
  cairo_line_to (cr, 243.5, 9);
  cairo_line_to (cr, 189.5, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 56 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 5, 45);
  cairo_line_to (cr, 149, 45);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 57 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 26.832, 33.641);
  cairo_line_to (cr, 77.668, 2.35901);
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
  cairo_move_to (cr, 23, 36);
  cairo_line_to (cr, 25.949, 32.203);
  cairo_line_to (cr, 27.719, 35.078);
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
  cairo_move_to (cr, 23, 36);
  cairo_line_to (cr, 25.949, 32.203);
  cairo_line_to (cr, 27.719, 35.078);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 60 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 81.5, 0);
  cairo_line_to (cr, 78.551, 3.797);
  cairo_line_to (cr, 76.781, 0.921997);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 61 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 81.5, 0);
  cairo_line_to (cr, 78.551, 3.797);
  cairo_line_to (cr, 76.781, 0.921997);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 62 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 27.5, 36);
  cairo_line_to (cr, 18.5, 36);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 63 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 7 */
  cairo_move_to (cr, 33.945, 15.797);
  cairo_line_to (cr, 32.898, 15.797);
  cairo_line_to (cr, 32.898, 24);
  cairo_line_to (cr, 37.996, 24);
  cairo_line_to (cr, 37.996, 23.078);
  cairo_line_to (cr, 33.945, 23.078);
  cairo_close_path (cr);
  cairo_move_to (cr, 38.254, 23.625);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 64 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 81.5, 0);
  cairo_line_to (cr, 68, 0);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 65 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 63.5, 29.25);
  cairo_line_to (cr, 81.5, 29.25);
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
  cairo_move_to (cr, 59, 29.25);
  cairo_line_to (cr, 63.5, 27.562);
  cairo_line_to (cr, 63.5, 30.938);
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
  cairo_move_to (cr, 59, 29.25);
  cairo_line_to (cr, 63.5, 27.562);
  cairo_line_to (cr, 63.5, 30.938);
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
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 86, 29.25);
  cairo_line_to (cr, 81.5, 30.938);
  cairo_line_to (cr, 81.5, 27.562);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 69 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 86, 29.25);
  cairo_line_to (cr, 81.5, 30.938);
  cairo_line_to (cr, 81.5, 27.562);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 70 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 14 */
  cairo_move_to (cr, 76.371, 26);
  cairo_line_to (cr, 78.453, 17.797);
  cairo_line_to (cr, 77.281, 17.797);
  cairo_line_to (cr, 75.773, 24.457);
  cairo_line_to (cr, 73.906, 17.797);
  cairo_line_to (cr, 72.781, 17.797);
  cairo_line_to (cr, 70.957, 24.457);
  cairo_line_to (cr, 69.418, 17.797);
  cairo_line_to (cr, 68.246, 17.797);
  cairo_line_to (cr, 70.352, 26);
  cairo_line_to (cr, 71.5, 26);
  cairo_line_to (cr, 73.332, 19.262);
  cairo_line_to (cr, 75.223, 26);
  cairo_close_path (cr);
  cairo_move_to (cr, 78.617, 25.875);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 71 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 90.5, 29.25);
  cairo_line_to (cr, 104, 29.25);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 72 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 86, 29.25);
  cairo_line_to (cr, 90.5, 27.562);
  cairo_line_to (cr, 90.5, 30.938);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 73 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 86, 29.25);
  cairo_line_to (cr, 90.5, 27.562);
  cairo_line_to (cr, 90.5, 30.938);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 74 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 108.5, 29.25);
  cairo_line_to (cr, 104, 30.938);
  cairo_line_to (cr, 104, 27.562);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 75 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 108.5, 29.25);
  cairo_line_to (cr, 104, 30.938);
  cairo_line_to (cr, 104, 27.562);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 76 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 21 */
  cairo_move_to (cr, 101.703, 20.207);
  cairo_curve_to (cr, 101.695, 18.598, 100.59, 17.664, 98.703, 17.664);

  cairo_curve_to (cr, 96.902, 17.664, 95.789, 18.586, 95.789, 20.07);

  cairo_curve_to (cr, 95.789, 21.074, 96.316, 21.703, 97.395, 21.984);

  cairo_line_to (cr, 99.434, 22.523);
  cairo_curve_to (cr, 100.469, 22.793, 100.941, 23.211, 100.941, 23.852);

  cairo_curve_to (cr, 100.941, 24.289, 100.703, 24.738, 100.355, 24.988);

  cairo_curve_to (cr, 100.027, 25.211, 99.512, 25.336, 98.848, 25.336);

  cairo_curve_to (cr, 97.957, 25.336, 97.352, 25.121, 96.957, 24.648);

  cairo_curve_to (cr, 96.652, 24.289, 96.52, 23.895, 96.531, 23.391);

  cairo_line_to (cr, 95.539, 23.391);
  cairo_curve_to (cr, 95.551, 24.145, 95.699, 24.641, 96.023, 25.09);

  cairo_curve_to (cr, 96.586, 25.855, 97.531, 26.258, 98.781, 26.258);

  cairo_curve_to (cr, 99.758, 26.258, 100.559, 26.035, 101.086, 25.629);

  cairo_curve_to (cr, 101.637, 25.191, 101.984, 24.457, 101.984, 23.75);

  cairo_curve_to (cr, 101.984, 22.738, 101.355, 21.996, 100.242, 21.691);

  cairo_line_to (cr, 98.184, 21.141);
  cairo_curve_to (cr, 97.195, 20.871, 96.832, 20.555, 96.832, 19.926);

  cairo_curve_to (cr, 96.832, 19.094, 97.566, 18.543, 98.668, 18.543);

  cairo_curve_to (cr, 99.973, 18.543, 100.703, 19.137, 100.715, 20.207);

  cairo_close_path (cr);
  cairo_move_to (cr, 102.5, 25.875);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 77 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 189.5, 45);
  cairo_line_to (cr, 243.5, 9);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 78 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 42 */
  cairo_move_to (cr, 224.977, 32.668);
  cairo_line_to (cr, 221.555, 32.668);
  cairo_line_to (cr, 221.555, 33.59);
  cairo_line_to (cr, 224.055, 33.59);
  cairo_line_to (cr, 224.055, 33.816);
  cairo_curve_to (cr, 224.055, 35.277, 222.973, 36.336, 221.477, 36.336);

  cairo_curve_to (cr, 220.645, 36.336, 219.891, 36.031, 219.406, 35.504);

  cairo_curve_to (cr, 218.867, 34.918, 218.543, 33.941, 218.543, 32.926);

  cairo_curve_to (cr, 218.543, 30.914, 219.688, 29.586, 221.422, 29.586);

  cairo_curve_to (cr, 222.672, 29.586, 223.57, 30.227, 223.797, 31.285);

  cairo_line_to (cr, 224.863, 31.285);
  cairo_curve_to (cr, 224.57, 29.621, 223.312, 28.664, 221.434, 28.664);

  cairo_curve_to (cr, 220.43, 28.664, 219.621, 28.922, 218.98, 29.453);

  cairo_curve_to (cr, 218.035, 30.238, 217.496, 31.512, 217.496, 32.984);

  cairo_curve_to (cr, 217.496, 35.504, 219.035, 37.258, 221.254, 37.258);

  cairo_curve_to (cr, 222.367, 37.258, 223.254, 36.844, 224.055, 35.953);

  cairo_line_to (cr, 224.312, 37.047);
  cairo_line_to (cr, 224.977, 37.047);
  cairo_close_path (cr);
  cairo_move_to (cr, 232.266, 28.797);
  cairo_line_to (cr, 231.277, 28.797);
  cairo_line_to (cr, 231.277, 35.504);
  cairo_line_to (cr, 226.992, 28.797);
  cairo_line_to (cr, 225.855, 28.797);
  cairo_line_to (cr, 225.855, 37);
  cairo_line_to (cr, 226.844, 37);
  cairo_line_to (cr, 226.844, 30.352);
  cairo_line_to (cr, 231.086, 37);
  cairo_line_to (cr, 232.266, 37);
  cairo_close_path (cr);
  cairo_move_to (cr, 234, 37);
  cairo_line_to (cr, 237.164, 37);
  cairo_curve_to (cr, 239.234, 37, 240.504, 35.449, 240.504, 32.895);

  cairo_curve_to (cr, 240.504, 30.352, 239.242, 28.797, 237.164, 28.797);

  cairo_line_to (cr, 234, 28.797);
  cairo_close_path (cr);
  cairo_move_to (cr, 235.047, 36.078);
  cairo_line_to (cr, 235.047, 29.723);
  cairo_line_to (cr, 236.984, 29.723);
  cairo_curve_to (cr, 238.602, 29.723, 239.457, 30.812, 239.457, 32.906);

  cairo_curve_to (cr, 239.457, 34.977, 238.602, 36.078, 236.984, 36.078);

  cairo_close_path (cr);
  cairo_move_to (cr, 241.492, 37.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 79 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 135.5, 24.75);
  cairo_line_to (cr, 135.5, 60.75);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 80 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 108.5, 24.75);
  cairo_line_to (cr, 108.5, 60.75);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 81 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 207.5, 31.5);
  cairo_line_to (cr, 216.5, 31.5);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 82 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 203, 31.5);
  cairo_line_to (cr, 207.5, 29.812);
  cairo_line_to (cr, 207.5, 33.188);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 83 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 203, 31.5);
  cairo_line_to (cr, 207.5, 29.812);
  cairo_line_to (cr, 207.5, 33.188);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 84 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 131, 0);
  cairo_line_to (cr, 117.5, 0);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 85 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 113, 29.25);
  cairo_line_to (cr, 131, 29.25);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 86 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 108.5, 29.25);
  cairo_line_to (cr, 113, 27.562);
  cairo_line_to (cr, 113, 30.938);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 87 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 108.5, 29.25);
  cairo_line_to (cr, 113, 27.562);
  cairo_line_to (cr, 113, 30.938);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 88 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 135.5, 29.25);
  cairo_line_to (cr, 131, 30.938);
  cairo_line_to (cr, 131, 27.562);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 89 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 135.5, 29.25);
  cairo_line_to (cr, 131, 30.938);
  cairo_line_to (cr, 131, 27.562);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 90 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 14 */
  cairo_move_to (cr, 126.371, 26);
  cairo_line_to (cr, 128.453, 17.797);
  cairo_line_to (cr, 127.281, 17.797);
  cairo_line_to (cr, 125.773, 24.457);
  cairo_line_to (cr, 123.906, 17.797);
  cairo_line_to (cr, 122.781, 17.797);
  cairo_line_to (cr, 120.957, 24.457);
  cairo_line_to (cr, 119.418, 17.797);
  cairo_line_to (cr, 118.246, 17.797);
  cairo_line_to (cr, 120.352, 26);
  cairo_line_to (cr, 121.5, 26);
  cairo_line_to (cr, 123.332, 19.262);
  cairo_line_to (cr, 125.223, 26);
  cairo_close_path (cr);
  cairo_move_to (cr, 128.117, 25.875);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 91 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 86, 24.75);
  cairo_line_to (cr, 86, 60.75);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 92 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 59, 24.75);
  cairo_line_to (cr, 59, 60.75);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 93 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 81);
  cairo_line_to (cr, 189.5, 81);
  cairo_line_to (cr, 189.5, 90);
  cairo_line_to (cr, 0.5, 90);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 94 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 81);
  cairo_line_to (cr, 189.5, 81);
  cairo_line_to (cr, 189.5, 90);
  cairo_line_to (cr, 0.5, 90);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 95 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 189.5, 81);
  cairo_line_to (cr, 243.5, 45);
  cairo_line_to (cr, 243.5, 54);
  cairo_line_to (cr, 189.5, 90);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 96 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 189.5, 81);
  cairo_line_to (cr, 243.5, 45);
  cairo_line_to (cr, 243.5, 54);
  cairo_line_to (cr, 189.5, 90);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 97 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 81);
  cairo_line_to (cr, 189.5, 81);
  cairo_line_to (cr, 189.5, 90);
  cairo_line_to (cr, 0.5, 90);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 98 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 189.5, 81);
  cairo_line_to (cr, 243.5, 45);
  cairo_line_to (cr, 243.5, 54);
  cairo_line_to (cr, 189.5, 90);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);
  cairo_restore (cr);

  return cr;
} /* end of figure_coupled_stripline_page_1_render() */

/* Total number of pages */
int figure_coupled_stripline_total_pages;

/* Array of the individual page render functions */
cairo_t * (*figure_coupled_stripline_render[1])(cairo_surface_t *, cairo_t *);

/* array of pointers to the widths and heights */
int figure_coupled_stripline_width[1];
int figure_coupled_stripline_height[1];

/* This function should be called at the beginning of the user program */
void figure_coupled_stripline_init(void)
{

  figure_coupled_stripline_total_pages = 1;

  figure_coupled_stripline_render[0] = figure_coupled_stripline_page_1_render;

  figure_coupled_stripline_width[0] = figure_coupled_stripline_page_1_width;
  figure_coupled_stripline_height[0] = figure_coupled_stripline_page_1_height;
}

float figure_coupled_stripline_width_max = 243;
float figure_coupled_stripline_height_max = 94;
