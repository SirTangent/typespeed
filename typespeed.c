#include "address_map.h"
#include "graphics.h"

int main(void) {

	clearpxl();

	// Test characters
	draw_text(10, 10, "Hello, World!\0");

	return 0;
}