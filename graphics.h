/*
* graphics.h: Low level graphics API for drawiing rudimentry shapes and 2D elements.
*
* Author: Wyatt Phillips
*
*/

#include "address_map.h"

extern void draw_line(short x1, short y1, short color);
extern void draw_rect(short x1, short y1, short x2, short y2, short fill);
extern void draw_triangle(short x1, short y1, short x2, short y2, short x3, short y3, short fill);
extern void draw_ellipse(short x, short y, short w, short h);

// Draws a polygon which takes in a two-dimensional array of points --> [ [x1, y1], [x2, y2], ... , [xn, yn] ]
extern void draw_polygon(short sides, short* xn_yn, short fill);

extern void clearscr();
extern void backgroundscr(short fill);
