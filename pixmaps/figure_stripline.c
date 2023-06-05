/* ***** Generated from pstoedit ***** */
#include <cairo.h>
#include <stdio.h>

/*
 * Original bounding box = for page # 1 is
 * LL: x: 103 y: 671 UR: x: 308 y: 765
 * The figure has been offset by (-103, 765)
 * to move LL to (0,0).  The width and height
 * can be read from the following two variables:
 */
static int figure_stripline_page_1_width = 205;
static int figure_stripline_page_1_height = 94;

static cairo_t * figure_stripline_page_1_render(cairo_surface_t *cs, cairo_t *cr)
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
  cairo_move_to (cr, 5, 45);
  cairo_line_to (cr, 149, 45);
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
  cairo_move_to (cr, 5, 81);
  cairo_line_to (cr, 149, 81);
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
  cairo_move_to (cr, 149, 45);
  cairo_line_to (cr, 203, 9);
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
  cairo_move_to (cr, 104, 45);
  cairo_line_to (cr, 162.5, 9);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 5 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 81);
  cairo_line_to (cr, 149, 81);
  cairo_line_to (cr, 149, 90);
  cairo_line_to (cr, 0.5, 90);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 6 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 81);
  cairo_line_to (cr, 149, 81);
  cairo_line_to (cr, 149, 90);
  cairo_line_to (cr, 0.5, 90);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
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
  cairo_move_to (cr, 149, 81);
  cairo_line_to (cr, 203, 45);
  cairo_line_to (cr, 203, 54);
  cairo_line_to (cr, 149, 90);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
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
  cairo_move_to (cr, 149, 81);
  cairo_line_to (cr, 203, 45);
  cairo_line_to (cr, 203, 54);
  cairo_line_to (cr, 149, 90);
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
  /* Path Elements 0 to 6 */
  cairo_move_to (cr, 0.5, 45);
  cairo_line_to (cr, 0.5, 81);
  cairo_line_to (cr, 149, 81);
  cairo_line_to (cr, 203, 45);
  cairo_line_to (cr, 203, 9);
  cairo_line_to (cr, 149, 45);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 10 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 6 */
  cairo_move_to (cr, 0.5, 45);
  cairo_line_to (cr, 0.5, 81);
  cairo_line_to (cr, 149, 81);
  cairo_line_to (cr, 203, 45);
  cairo_line_to (cr, 203, 9);
  cairo_line_to (cr, 149, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.598,0.598,0.598);
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
  cairo_move_to (cr, 149, 45);
  cairo_line_to (cr, 149, 81);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 12 (polyline):
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
   * Path # 13 (polygon):
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
   * Path # 14 (polygon):
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
   * Path # 15 (polygon):
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
   * Path # 16 (polygon):
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
   * Path # 17 (polygon):
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
   * Path # 18 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 167, 85.5);
  cairo_line_to (cr, 176, 85.5);
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
  cairo_move_to (cr, 162.5, 85.5);
  cairo_line_to (cr, 167, 83.812);
  cairo_line_to (cr, 167, 87.188);
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
  cairo_move_to (cr, 162.5, 85.5);
  cairo_line_to (cr, 167, 83.812);
  cairo_line_to (cr, 167, 87.188);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 21 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 179.938, 80.438);
  cairo_line_to (cr, 204.688, 80.438);
  cairo_line_to (cr, 204.688, 93.375);
  cairo_line_to (cr, 179.938, 93.375);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 22 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 42 */
  cairo_move_to (cr, 188.977, 86.668);
  cairo_line_to (cr, 185.555, 86.668);
  cairo_line_to (cr, 185.555, 87.59);
  cairo_line_to (cr, 188.055, 87.59);
  cairo_line_to (cr, 188.055, 87.816);
  cairo_curve_to (cr, 188.055, 89.277, 186.973, 90.336, 185.477, 90.336);

  cairo_curve_to (cr, 184.645, 90.336, 183.891, 90.031, 183.406, 89.504);

  cairo_curve_to (cr, 182.867, 88.918, 182.543, 87.941, 182.543, 86.926);

  cairo_curve_to (cr, 182.543, 84.914, 183.688, 83.586, 185.422, 83.586);

  cairo_curve_to (cr, 186.672, 83.586, 187.57, 84.227, 187.797, 85.285);

  cairo_line_to (cr, 188.863, 85.285);
  cairo_curve_to (cr, 188.57, 83.621, 187.312, 82.664, 185.434, 82.664);

  cairo_curve_to (cr, 184.43, 82.664, 183.621, 82.922, 182.98, 83.453);

  cairo_curve_to (cr, 182.035, 84.238, 181.496, 85.512, 181.496, 86.984);

  cairo_curve_to (cr, 181.496, 89.504, 183.035, 91.258, 185.254, 91.258);

  cairo_curve_to (cr, 186.367, 91.258, 187.254, 90.844, 188.055, 89.953);

  cairo_line_to (cr, 188.312, 91.047);
  cairo_line_to (cr, 188.977, 91.047);
  cairo_close_path (cr);
  cairo_move_to (cr, 196.266, 82.797);
  cairo_line_to (cr, 195.277, 82.797);
  cairo_line_to (cr, 195.277, 89.504);
  cairo_line_to (cr, 190.992, 82.797);
  cairo_line_to (cr, 189.855, 82.797);
  cairo_line_to (cr, 189.855, 91);
  cairo_line_to (cr, 190.844, 91);
  cairo_line_to (cr, 190.844, 84.352);
  cairo_line_to (cr, 195.086, 91);
  cairo_line_to (cr, 196.266, 91);
  cairo_close_path (cr);
  cairo_move_to (cr, 198, 91);
  cairo_line_to (cr, 201.164, 91);
  cairo_curve_to (cr, 203.234, 91, 204.504, 89.449, 204.504, 86.895);

  cairo_curve_to (cr, 204.504, 84.352, 203.242, 82.797, 201.164, 82.797);

  cairo_line_to (cr, 198, 82.797);
  cairo_close_path (cr);
  cairo_move_to (cr, 199.047, 90.078);
  cairo_line_to (cr, 199.047, 83.723);
  cairo_line_to (cr, 200.984, 83.723);
  cairo_curve_to (cr, 202.602, 83.723, 203.457, 84.812, 203.457, 86.906);

  cairo_curve_to (cr, 203.457, 88.977, 202.602, 90.078, 200.984, 90.078);

  cairo_close_path (cr);
  cairo_move_to (cr, 205.492, 91.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 23 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 63.5, 63);
  cairo_line_to (cr, 90.5, 63);
  cairo_line_to (cr, 90.5, 72);
  cairo_line_to (cr, 63.5, 72);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 24 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 63.5, 63);
  cairo_line_to (cr, 90.5, 63);
  cairo_line_to (cr, 90.5, 72);
  cairo_line_to (cr, 63.5, 72);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 25 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 90.5, 63);
  cairo_line_to (cr, 90.5, 72);
  cairo_line_to (cr, 149, 36);
  cairo_line_to (cr, 149, 27);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 26 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 90.5, 63);
  cairo_line_to (cr, 90.5, 72);
  cairo_line_to (cr, 149, 36);
  cairo_line_to (cr, 149, 27);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 27 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 90.5, 63);
  cairo_line_to (cr, 149, 27);
  cairo_line_to (cr, 122, 27);
  cairo_line_to (cr, 63.5, 63);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 28 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 90.5, 63);
  cairo_line_to (cr, 149, 27);
  cairo_line_to (cr, 122, 27);
  cairo_line_to (cr, 63.5, 63);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
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
  cairo_move_to (cr, 52.25, 72);
  cairo_line_to (cr, 61.25, 72);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 30 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 56.75, 58.5);
  cairo_line_to (cr, 56.75, 56.25);
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
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 56.75, 63);
  cairo_line_to (cr, 55.062, 58.5);
  cairo_line_to (cr, 58.438, 58.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 32 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 56.75, 63);
  cairo_line_to (cr, 55.062, 58.5);
  cairo_line_to (cr, 58.438, 58.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
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
  cairo_move_to (cr, 56.75, 76.5);
  cairo_line_to (cr, 56.75, 78.75);
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
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 56.75, 72);
  cairo_line_to (cr, 58.438, 76.5);
  cairo_line_to (cr, 55.062, 76.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 35 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 56.75, 72);
  cairo_line_to (cr, 58.438, 76.5);
  cairo_line_to (cr, 55.062, 76.5);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 36 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 52.25, 63);
  cairo_line_to (cr, 61.25, 63);
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
  /* Path Elements 0 to 62 */
  cairo_move_to (cr, 28.984, 63.723);
  cairo_line_to (cr, 31.672, 63.723);
  cairo_line_to (cr, 31.672, 62.797);
  cairo_line_to (cr, 25.234, 62.797);
  cairo_line_to (cr, 25.234, 63.723);
  cairo_line_to (cr, 27.938, 63.723);
  cairo_line_to (cr, 27.938, 71);
  cairo_line_to (cr, 28.984, 71);
  cairo_close_path (cr);
  cairo_move_to (cr, 32.789, 65.105);
  cairo_line_to (cr, 32.789, 71);
  cairo_line_to (cr, 33.734, 71);
  cairo_line_to (cr, 33.734, 67.297);
  cairo_curve_to (cr, 33.734, 66.445, 34.352, 65.758, 35.117, 65.758);

  cairo_curve_to (cr, 35.812, 65.758, 36.207, 66.184, 36.207, 66.938);

  cairo_line_to (cr, 36.207, 71);
  cairo_line_to (cr, 37.152, 71);
  cairo_line_to (cr, 37.152, 67.297);
  cairo_curve_to (cr, 37.152, 66.445, 37.77, 65.758, 38.535, 65.758);

  cairo_curve_to (cr, 39.223, 65.758, 39.629, 66.195, 39.629, 66.938);

  cairo_line_to (cr, 39.629, 71);
  cairo_line_to (cr, 40.574, 71);
  cairo_line_to (cr, 40.574, 66.578);
  cairo_curve_to (cr, 40.574, 65.52, 39.965, 64.938, 38.863, 64.938);

  cairo_curve_to (cr, 38.074, 64.938, 37.602, 65.172, 37.051, 65.836);

  cairo_curve_to (cr, 36.703, 65.207, 36.23, 64.938, 35.465, 64.938);

  cairo_curve_to (cr, 34.676, 64.938, 34.16, 65.23, 33.652, 65.938);

  cairo_line_to (cr, 33.652, 65.105);
  cairo_close_path (cr);
  cairo_move_to (cr, 46.77, 68.367);
  cairo_curve_to (cr, 46.77, 67.469, 46.703, 66.926, 46.535, 66.488);

  cairo_curve_to (cr, 46.152, 65.52, 45.254, 64.938, 44.148, 64.938);

  cairo_curve_to (cr, 42.508, 64.938, 41.449, 66.195, 41.449, 68.133);

  cairo_curve_to (cr, 41.449, 70.066, 42.473, 71.258, 44.129, 71.258);

  cairo_curve_to (cr, 45.477, 71.258, 46.41, 70.492, 46.648, 69.211);

  cairo_line_to (cr, 45.703, 69.211);
  cairo_curve_to (cr, 45.445, 69.988, 44.914, 70.391, 44.16, 70.391);

  cairo_curve_to (cr, 43.566, 70.391, 43.059, 70.121, 42.742, 69.629);

  cairo_curve_to (cr, 42.52, 69.289, 42.441, 68.953, 42.43, 68.367);

  cairo_close_path (cr);
  cairo_move_to (cr, 42.453, 67.602);
  cairo_curve_to (cr, 42.531, 66.512, 43.195, 65.801, 44.141, 65.801);

  cairo_curve_to (cr, 45.062, 65.801, 45.77, 66.566, 45.77, 67.535);

  cairo_curve_to (cr, 45.77, 67.559, 45.77, 67.578, 45.758, 67.602);

  cairo_close_path (cr);
  cairo_move_to (cr, 50.859, 65.105);
  cairo_line_to (cr, 49.891, 65.105);
  cairo_line_to (cr, 49.891, 63.484);
  cairo_line_to (cr, 48.957, 63.484);
  cairo_line_to (cr, 48.957, 65.105);
  cairo_line_to (cr, 48.156, 65.105);
  cairo_line_to (cr, 48.156, 65.871);
  cairo_line_to (cr, 48.957, 65.871);
  cairo_line_to (cr, 48.957, 70.324);
  cairo_curve_to (cr, 48.957, 70.922, 49.359, 71.258, 50.094, 71.258);

  cairo_curve_to (cr, 50.316, 71.258, 50.543, 71.234, 50.859, 71.18);

  cairo_line_to (cr, 50.859, 70.391);
  cairo_curve_to (cr, 50.734, 70.426, 50.586, 70.438, 50.406, 70.438);

  cairo_curve_to (cr, 50.004, 70.438, 49.891, 70.324, 49.891, 69.91);

  cairo_line_to (cr, 49.891, 65.871);
  cairo_line_to (cr, 50.859, 65.871);
  cairo_close_path (cr);
  cairo_move_to (cr, 50.871, 70.875);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 38 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 42 */
  cairo_move_to (cr, 183.977, 32.668);
  cairo_line_to (cr, 180.555, 32.668);
  cairo_line_to (cr, 180.555, 33.59);
  cairo_line_to (cr, 183.055, 33.59);
  cairo_line_to (cr, 183.055, 33.816);
  cairo_curve_to (cr, 183.055, 35.277, 181.973, 36.336, 180.477, 36.336);

  cairo_curve_to (cr, 179.645, 36.336, 178.891, 36.031, 178.406, 35.504);

  cairo_curve_to (cr, 177.867, 34.918, 177.543, 33.941, 177.543, 32.926);

  cairo_curve_to (cr, 177.543, 30.914, 178.688, 29.586, 180.422, 29.586);

  cairo_curve_to (cr, 181.672, 29.586, 182.57, 30.227, 182.797, 31.285);

  cairo_line_to (cr, 183.863, 31.285);
  cairo_curve_to (cr, 183.57, 29.621, 182.312, 28.664, 180.434, 28.664);

  cairo_curve_to (cr, 179.43, 28.664, 178.621, 28.922, 177.98, 29.453);

  cairo_curve_to (cr, 177.035, 30.238, 176.496, 31.512, 176.496, 32.984);

  cairo_curve_to (cr, 176.496, 35.504, 178.035, 37.258, 180.254, 37.258);

  cairo_curve_to (cr, 181.367, 37.258, 182.254, 36.844, 183.055, 35.953);

  cairo_line_to (cr, 183.312, 37.047);
  cairo_line_to (cr, 183.977, 37.047);
  cairo_close_path (cr);
  cairo_move_to (cr, 192.266, 28.797);
  cairo_line_to (cr, 191.277, 28.797);
  cairo_line_to (cr, 191.277, 35.504);
  cairo_line_to (cr, 186.992, 28.797);
  cairo_line_to (cr, 185.855, 28.797);
  cairo_line_to (cr, 185.855, 37);
  cairo_line_to (cr, 186.844, 37);
  cairo_line_to (cr, 186.844, 30.352);
  cairo_line_to (cr, 191.086, 37);
  cairo_line_to (cr, 192.266, 37);
  cairo_close_path (cr);
  cairo_move_to (cr, 194, 37);
  cairo_line_to (cr, 197.164, 37);
  cairo_curve_to (cr, 199.234, 37, 200.504, 35.449, 200.504, 32.895);

  cairo_curve_to (cr, 200.504, 30.352, 199.242, 28.797, 197.164, 28.797);

  cairo_line_to (cr, 194, 28.797);
  cairo_close_path (cr);
  cairo_move_to (cr, 195.047, 36.078);
  cairo_line_to (cr, 195.047, 29.723);
  cairo_line_to (cr, 196.984, 29.723);
  cairo_curve_to (cr, 198.602, 29.723, 199.457, 30.812, 199.457, 32.906);

  cairo_curve_to (cr, 199.457, 34.977, 198.602, 36.078, 196.984, 36.078);

  cairo_close_path (cr);
  cairo_move_to (cr, 200.992, 37.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
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
  /* Path Elements 0 to 27 */
  cairo_move_to (cr, 119.535, 71.594);
  cairo_curve_to (cr, 119.297, 72.301, 118.883, 72.582, 118.07, 72.582);

  cairo_curve_to (cr, 117.531, 72.582, 117.082, 72.449, 116.766, 72.18);

  cairo_curve_to (cr, 116.543, 71.977, 116.453, 71.75, 116.453, 71.391);

  cairo_curve_to (cr, 116.453, 70.727, 116.832, 70.301, 117.43, 70.301);

  cairo_curve_to (cr, 117.543, 70.301, 117.645, 70.312, 117.758, 70.332);

  cairo_curve_to (cr, 117.902, 70.367, 118.039, 70.391, 118.148, 70.391);

  cairo_curve_to (cr, 118.488, 70.391, 118.734, 70.234, 118.734, 70.031);

  cairo_curve_to (cr, 118.734, 69.852, 118.602, 69.762, 118.34, 69.762);

  cairo_curve_to (cr, 118.25, 69.762, 118.16, 69.762, 117.957, 69.781);

  cairo_curve_to (cr, 117.586, 69.816, 117.496, 69.828, 117.395, 69.828);

  cairo_curve_to (cr, 116.824, 69.828, 116.453, 69.434, 116.453, 68.828);

  cairo_curve_to (cr, 116.453, 68.164, 116.922, 67.621, 117.508, 67.621);

  cairo_curve_to (cr, 117.914, 67.621, 118.172, 67.801, 118.297, 68.164);

  cairo_curve_to (cr, 118.352, 68.332, 118.387, 68.422, 118.398, 68.445);

  cairo_curve_to (cr, 118.52, 68.691, 118.711, 68.828, 118.938, 68.828);

  cairo_curve_to (cr, 119.23, 68.828, 119.477, 68.578, 119.477, 68.266);

  cairo_curve_to (cr, 119.477, 67.668, 118.711, 67.23, 117.668, 67.23);

  cairo_curve_to (cr, 116.957, 67.23, 116.441, 67.387, 116, 67.734);

  cairo_curve_to (cr, 115.598, 68.051, 115.406, 68.398, 115.406, 68.816);

  cairo_curve_to (cr, 115.406, 69.188, 115.574, 69.523, 115.855, 69.738);

  cairo_curve_to (cr, 116.012, 69.84, 116.113, 69.895, 116.461, 70.062);

  cairo_curve_to (cr, 116.012, 70.223, 115.797, 70.344, 115.598, 70.57);

  cairo_curve_to (cr, 115.383, 70.805, 115.246, 71.156, 115.246, 71.48);

  cairo_curve_to (cr, 115.246, 72.449, 116.238, 73.145, 117.633, 73.145);

  cairo_curve_to (cr, 118.883, 73.145, 119.578, 72.684, 119.805, 71.695);

  cairo_close_path (cr);
  cairo_move_to (cr, 120.188, 73.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 40 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 11 */
  cairo_move_to (cr, 120.465, 71.465);
  cairo_line_to (cr, 120.465, 75);
  cairo_line_to (cr, 121.031, 75);
  cairo_line_to (cr, 121.031, 73.164);
  cairo_curve_to (cr, 121.031, 72.656, 121.16, 72.328, 121.43, 72.133);

  cairo_curve_to (cr, 121.605, 72.004, 121.773, 71.961, 122.168, 71.957);

  cairo_line_to (cr, 122.168, 71.383);
  cairo_curve_to (cr, 122.07, 71.367, 122.023, 71.363, 121.949, 71.363);

  cairo_curve_to (cr, 121.586, 71.363, 121.309, 71.578, 120.984, 72.105);

  cairo_line_to (cr, 120.984, 71.465);
  cairo_close_path (cr);
  cairo_move_to (cr, 122.434, 75.375);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 41 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 65 */
  cairo_move_to (cr, 122.98, 71.828);
  cairo_line_to (cr, 122.98, 73);
  cairo_line_to (cr, 123.652, 73);
  cairo_line_to (cr, 123.652, 73.203);
  cairo_curve_to (cr, 123.652, 73.98, 123.508, 74.203, 122.98, 74.227);

  cairo_line_to (cr, 122.98, 74.652);
  cairo_curve_to (cr, 123.766, 74.652, 124.16, 74.148, 124.16, 73.18);

  cairo_line_to (cr, 124.16, 71.828);
  cairo_close_path (cr);
  cairo_move_to (cr, 128.859, 67.105);
  cairo_line_to (cr, 127.891, 67.105);
  cairo_line_to (cr, 127.891, 65.484);
  cairo_line_to (cr, 126.957, 65.484);
  cairo_line_to (cr, 126.957, 67.105);
  cairo_line_to (cr, 126.156, 67.105);
  cairo_line_to (cr, 126.156, 67.871);
  cairo_line_to (cr, 126.957, 67.871);
  cairo_line_to (cr, 126.957, 72.324);
  cairo_curve_to (cr, 126.957, 72.922, 127.359, 73.258, 128.094, 73.258);

  cairo_curve_to (cr, 128.316, 73.258, 128.543, 73.234, 128.859, 73.18);

  cairo_line_to (cr, 128.859, 72.391);
  cairo_curve_to (cr, 128.734, 72.426, 128.586, 72.438, 128.406, 72.438);

  cairo_curve_to (cr, 128.004, 72.438, 127.891, 72.324, 127.891, 71.91);

  cairo_line_to (cr, 127.891, 67.871);
  cairo_line_to (cr, 128.859, 67.871);
  cairo_close_path (cr);
  cairo_move_to (cr, 135.02, 72.449);
  cairo_curve_to (cr, 134.918, 72.473, 134.871, 72.473, 134.816, 72.473);

  cairo_curve_to (cr, 134.488, 72.473, 134.309, 72.301, 134.309, 72.012);

  cairo_line_to (cr, 134.309, 68.547);
  cairo_curve_to (cr, 134.309, 67.5, 133.547, 66.938, 132.094, 66.938);

  cairo_curve_to (cr, 131.238, 66.938, 130.531, 67.184, 130.137, 67.621);

  cairo_curve_to (cr, 129.867, 67.926, 129.754, 68.266, 129.73, 68.848);

  cairo_line_to (cr, 130.676, 68.848);
  cairo_curve_to (cr, 130.754, 68.129, 131.184, 67.801, 132.059, 67.801);

  cairo_curve_to (cr, 132.902, 67.801, 133.375, 68.117, 133.375, 68.68);

  cairo_line_to (cr, 133.375, 68.926);
  cairo_curve_to (cr, 133.375, 69.32, 133.141, 69.488, 132.398, 69.578);

  cairo_curve_to (cr, 131.07, 69.75, 130.867, 69.793, 130.508, 69.941);

  cairo_curve_to (cr, 129.82, 70.223, 129.473, 70.75, 129.473, 71.516);

  cairo_curve_to (cr, 129.473, 72.582, 130.215, 73.258, 131.406, 73.258);

  cairo_curve_to (cr, 132.148, 73.258, 132.746, 73, 133.41, 72.391);

  cairo_curve_to (cr, 133.477, 72.988, 133.77, 73.258, 134.379, 73.258);

  cairo_curve_to (cr, 134.57, 73.258, 134.715, 73.234, 135.02, 73.156);

  cairo_close_path (cr);
  cairo_move_to (cr, 133.375, 71.145);
  cairo_curve_to (cr, 133.375, 71.457, 133.285, 71.648, 133.004, 71.91);

  cairo_curve_to (cr, 132.621, 72.258, 132.16, 72.438, 131.609, 72.438);

  cairo_curve_to (cr, 130.879, 72.438, 130.453, 72.09, 130.453, 71.492);

  cairo_curve_to (cr, 130.453, 70.875, 130.867, 70.559, 131.867, 70.414);

  cairo_curve_to (cr, 132.859, 70.277, 133.062, 70.234, 133.375, 70.086);

  cairo_close_path (cr);
  cairo_move_to (cr, 135.789, 67.105);
  cairo_line_to (cr, 135.789, 73);
  cairo_line_to (cr, 136.734, 73);
  cairo_line_to (cr, 136.734, 69.75);
  cairo_curve_to (cr, 136.734, 68.547, 137.363, 67.758, 138.328, 67.758);

  cairo_curve_to (cr, 139.074, 67.758, 139.547, 68.207, 139.547, 68.918);

  cairo_line_to (cr, 139.547, 73);
  cairo_line_to (cr, 140.48, 73);
  cairo_line_to (cr, 140.48, 68.547);
  cairo_curve_to (cr, 140.48, 67.566, 139.746, 66.938, 138.609, 66.938);

  cairo_curve_to (cr, 137.734, 66.938, 137.172, 67.273, 136.652, 68.094);

  cairo_line_to (cr, 136.652, 67.105);
  cairo_close_path (cr);
  cairo_move_to (cr, 141.191, 73.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
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
  /* Path Elements 0 to 22 */
  cairo_move_to (cr, 143.879, 68.004);
  cairo_curve_to (cr, 143.297, 68.184, 142.957, 68.332, 142.621, 68.555);

  cairo_curve_to (cr, 141.879, 69.062, 141.449, 69.852, 141.449, 70.695);

  cairo_curve_to (cr, 141.449, 72.031, 142.52, 73.145, 143.812, 73.145);

  cairo_curve_to (cr, 145.219, 73.145, 146.41, 71.875, 146.41, 70.391);

  cairo_curve_to (cr, 146.41, 69.672, 146.164, 68.973, 145.703, 68.422);

  cairo_curve_to (cr, 145.309, 67.949, 145.129, 67.812, 144.117, 67.207);

  cairo_curve_to (cr, 143.07, 66.566, 142.664, 66.172, 142.664, 65.812);

  cairo_curve_to (cr, 142.664, 65.441, 143.023, 65.148, 143.465, 65.148);

  cairo_curve_to (cr, 143.867, 65.148, 144.117, 65.27, 144.531, 65.699);

  cairo_curve_to (cr, 144.992, 66.172, 145.152, 66.273, 145.434, 66.273);

  cairo_curve_to (cr, 145.734, 66.273, 145.961, 66.059, 145.961, 65.789);

  cairo_curve_to (cr, 145.961, 65.18, 144.984, 64.676, 143.801, 64.676);

  cairo_curve_to (cr, 142.742, 64.676, 142.102, 65.102, 142.102, 65.789);

  cairo_curve_to (cr, 142.102, 66.195, 142.281, 66.52, 142.777, 66.98);

  cairo_close_path (cr);
  cairo_move_to (cr, 144.195, 68.297);
  cairo_curve_to (cr, 144.949, 69.008, 145.309, 69.793, 145.309, 70.762);

  cairo_curve_to (cr, 145.309, 71.863, 144.781, 72.617, 143.992, 72.617);

  cairo_curve_to (cr, 143.203, 72.617, 142.664, 71.738, 142.664, 70.445);

  cairo_curve_to (cr, 142.664, 69.23, 143.172, 68.512, 144.195, 68.297);

  cairo_close_path (cr);
  cairo_move_to (cr, 146.746, 73.125);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
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
  cairo_move_to (cr, 63.5, 63);
  cairo_line_to (cr, 90.5, 63);
  cairo_line_to (cr, 90.5, 72);
  cairo_line_to (cr, 63.5, 72);
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
  cairo_move_to (cr, 90.5, 63);
  cairo_line_to (cr, 90.5, 72);
  cairo_line_to (cr, 149, 36);
  cairo_line_to (cr, 149, 27);
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
  cairo_move_to (cr, 90.5, 63);
  cairo_line_to (cr, 149, 27);
  cairo_line_to (cr, 122, 27);
  cairo_line_to (cr, 63.5, 63);
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
  /* Path Elements 0 to 6 */
  cairo_move_to (cr, 0.5, 45);
  cairo_line_to (cr, 0.5, 81);
  cairo_line_to (cr, 149, 81);
  cairo_line_to (cr, 203, 45);
  cairo_line_to (cr, 203, 9);
  cairo_line_to (cr, 149, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 47 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 81);
  cairo_line_to (cr, 149, 81);
  cairo_line_to (cr, 149, 90);
  cairo_line_to (cr, 0.5, 90);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
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
  cairo_move_to (cr, 149, 81);
  cairo_line_to (cr, 203, 45);
  cairo_line_to (cr, 203, 54);
  cairo_line_to (cr, 149, 90);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
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
  cairo_line_to (cr, 149, 36);
  cairo_line_to (cr, 149, 45);
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
  cairo_line_to (cr, 149, 36);
  cairo_line_to (cr, 149, 45);
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
  cairo_move_to (cr, 149, 36);
  cairo_line_to (cr, 203, 0);
  cairo_line_to (cr, 203, 9);
  cairo_line_to (cr, 149, 45);
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
  cairo_move_to (cr, 149, 36);
  cairo_line_to (cr, 203, 0);
  cairo_line_to (cr, 203, 9);
  cairo_line_to (cr, 149, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 53 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 36);
  cairo_line_to (cr, 54.5, 0);
  cairo_line_to (cr, 203, 0);
  cairo_line_to (cr, 149, 36);
  cairo_close_path (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
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
  cairo_line_to (cr, 54.5, 0);
  cairo_line_to (cr, 203, 0);
  cairo_line_to (cr, 149, 36);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0.266,0.266,0.266);
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
  cairo_move_to (cr, 0.5, 36);
  cairo_line_to (cr, 54.5, 0);
  cairo_line_to (cr, 203, 0);
  cairo_line_to (cr, 149, 36);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 56 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 0.5, 36);
  cairo_line_to (cr, 149, 36);
  cairo_line_to (cr, 149, 45);
  cairo_line_to (cr, 0.5, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 57 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 4 */
  cairo_move_to (cr, 149, 36);
  cairo_line_to (cr, 203, 0);
  cairo_line_to (cr, 203, 9);
  cairo_line_to (cr, 149, 45);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 58 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 167, 31.5);
  cairo_line_to (cr, 176, 31.5);
  cairo_set_source_rgb (cr, 0,0,0);
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
  cairo_move_to (cr, 162.5, 31.5);
  cairo_line_to (cr, 167, 29.812);
  cairo_line_to (cr, 167, 33.188);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
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
  cairo_move_to (cr, 162.5, 31.5);
  cairo_line_to (cr, 167, 29.812);
  cairo_line_to (cr, 167, 33.188);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
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
  cairo_move_to (cr, 90.5, 24.75);
  cairo_line_to (cr, 90.5, 60.75);
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
  cairo_move_to (cr, 63.5, 24.75);
  cairo_line_to (cr, 63.5, 60.75);
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
  cairo_move_to (cr, 32, 36);
  cairo_line_to (cr, 90.5, 0);
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
  cairo_move_to (cr, 26.832, 33.641);
  cairo_line_to (cr, 77.668, 2.35901);
  cairo_set_source_rgb (cr, 0,0,0);
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
   * Path # 66 (polygon):
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
   * Path # 67 (polygon):
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
   * Path # 68 (polygon):
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
   * Path # 69 (polyline):
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
   * Path # 70 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 7 */
  cairo_move_to (cr, 38.945, 15.797);
  cairo_line_to (cr, 37.898, 15.797);
  cairo_line_to (cr, 37.898, 24);
  cairo_line_to (cr, 42.996, 24);
  cairo_line_to (cr, 42.996, 23.078);
  cairo_line_to (cr, 38.945, 23.078);
  cairo_close_path (cr);
  cairo_move_to (cr, 42.754, 23.625);
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
  cairo_move_to (cr, 86, 0);
  cairo_line_to (cr, 72.5, 0);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 72 (polyline):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0.5625);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 1 */
  cairo_move_to (cr, 68, 29.25);
  cairo_line_to (cr, 86, 29.25);
  cairo_set_source_rgb (cr, 0,0,0);
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
  cairo_move_to (cr, 63.5, 29.25);
  cairo_line_to (cr, 68, 27.562);
  cairo_line_to (cr, 68, 30.938);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
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
  cairo_move_to (cr, 63.5, 29.25);
  cairo_line_to (cr, 68, 27.562);
  cairo_line_to (cr, 68, 30.938);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
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
  cairo_move_to (cr, 90.5, 29.25);
  cairo_line_to (cr, 86, 30.938);
  cairo_line_to (cr, 86, 27.562);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 1,1,1);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 76 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 3 */
  cairo_move_to (cr, 90.5, 29.25);
  cairo_line_to (cr, 86, 30.938);
  cairo_line_to (cr, 86, 27.562);
  cairo_close_path (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);

  /*
   * Path # 77 (polygon):
   */

  cairo_save (cr);
  cairo_set_line_width (cr, 0);
  cairo_set_line_cap (cr, CAIRO_LINE_CAP_BUTT);
  cairo_set_dash (cr, NULL, 0, 0.0);
  /* Path Elements 0 to 14 */
  cairo_move_to (cr, 81.371, 26);
  cairo_line_to (cr, 83.453, 17.797);
  cairo_line_to (cr, 82.281, 17.797);
  cairo_line_to (cr, 80.773, 24.457);
  cairo_line_to (cr, 78.906, 17.797);
  cairo_line_to (cr, 77.781, 17.797);
  cairo_line_to (cr, 75.957, 24.457);
  cairo_line_to (cr, 74.418, 17.797);
  cairo_line_to (cr, 73.246, 17.797);
  cairo_line_to (cr, 75.352, 26);
  cairo_line_to (cr, 76.5, 26);
  cairo_line_to (cr, 78.332, 19.262);
  cairo_line_to (cr, 80.223, 26);
  cairo_close_path (cr);
  cairo_move_to (cr, 83.117, 25.875);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_EVEN_ODD);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_fill_preserve (cr);
  cairo_set_fill_rule (cr, CAIRO_FILL_RULE_WINDING);
  cairo_set_source_rgb (cr, 0,0,0);
  cairo_stroke (cr);
  cairo_restore (cr);
  cairo_restore (cr);

  return cr;
} /* end of figure_stripline_page_1_render() */

/* Total number of pages */
int figure_stripline_total_pages;

/* Array of the individual page render functions */
cairo_t * (*figure_stripline_render[1])(cairo_surface_t *, cairo_t *);

/* array of pointers to the widths and heights */
int figure_stripline_width[1];
int figure_stripline_height[1];

/* This function should be called at the beginning of the user program */
void figure_stripline_init(void)
{

  figure_stripline_total_pages = 1;

  figure_stripline_render[0] = figure_stripline_page_1_render;

  figure_stripline_width[0] = figure_stripline_page_1_width;
  figure_stripline_height[0] = figure_stripline_page_1_height;
}

float figure_stripline_width_max = 205;
float figure_stripline_height_max = 94;
