/*
* graphics.h: Low level graphics API for drawiing rudimentry shapes and 2D elements.
*
* Author: Wyatt Phillips
*
*/

#include "address_map.h"

#define PIXEL_WIDTH 320
#define PIXEL_HEIGHT 240

#define CHAR_WIDTH 80
#define CHAR_HEIGHT 60

// draws text at a starting position (x,y) on the character buffer
void draw_text(short x, short y, char* txt);

// Clears the pixel buffer with black (*=0x0)
void clearpxl();
// Clears the character buffer (*=0x0)
void clearchr();
// Clears both buffers
void clearscr();
// Fills the screen with a fill color
void backgroundscr(short fill);


// Optional Works in Progress

void draw_line(short x1, short y1, short color);
void draw_rect(short x1, short y1, short x2, short y2, short fill);
void draw_triangle(short x1, short y1, short x2, short y2, short x3, short y3, short fill);
void draw_ellipse(short x, short y, short w, short h);

// Draws a polygon which takes in a two-dimensional array of points --> [ [x1, y1], [x2, y2], ... , [xn, yn] ]
void draw_polygon(short sides, short* xn_yn, short fill);