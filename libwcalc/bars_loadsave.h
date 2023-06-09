/* $Id: bars_loadsave.h,v 1.2 2008/11/29 20:42:03 dan Exp $ */

/*
 * Copyright (C) 2008 Dan McMahill
 * All rights reserved.
 *
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 * 
 */

#ifndef __BARS_LOADSAVE_H__
#define __BARS_LOADSAVE_H__

/* writes the data from 'b' to fp */
void bars_save(bars *b, FILE *fp, char *fname);

/*
 * returns 0 on success
 */
int bars_load(bars *bb, FILE *fp);

int bars_load_string(bars *b, const char *str);
char * bars_save_string(bars *b);

#endif /*__BARS_LOADSAVE_H__*/
