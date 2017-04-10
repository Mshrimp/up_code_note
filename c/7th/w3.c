#include "vt.h"

int main(void)
{
	system("clear");
	draw_box(1, 1, 40, 15, 33, '#');
	draw_vline(5, 10, 10, 32, '|');
	draw_hline(5, 10, 10, 32, '-');
	draw_rect(3, 3, 5, 3, 31, '@');
	return 0;
}
