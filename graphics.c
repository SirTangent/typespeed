#include "address_map.h"
#include "graphics.h"

static int cursor = 0;

volatile short* pixel_buffer = (short*)PIXEL_BUFFER_BASE;
volatile char* char_buffer = (char*)CHARACTER_BUFFER_BASE;

void clearpxl() {
	for (int i = 0; i < RES_PIXEL_HEIGHT; i++) {
		for (int j = 0; j < RES_PIXEL_WIDTH; j++) {
			*(pixel_buffer + (i << 10) + j) = 0x0000;
		}
	}
}

void clearchar() {
	for (int i = 0; i < RES_CHAR_HEIGHT; i++) {
		for (int j = 0; j < RES_CHAR_WIDTH; j++) {
			*(char_buffer + (i << 7) + j) = 0x0;
		}
	}
}

void draw_text(short x, short y, char* txt) {
	int offset = (y << 7) + x;
	while (*(txt)) {
		*(char_buffer + offset) = *(txt);
		++txt;
		++offset;
	}
}