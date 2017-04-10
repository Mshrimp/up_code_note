#include "vt.h"

#define ROW 15
#define COL 50
#define W  10
#define H  4

int main(void)
{
	int x = 3, y = 5, x_inc = 1, y_inc = 1;
	int color = 34;

	system("clear");//清屏
	hide_cur();
	while(1)
	{
		/*gotoxy(1, 1);*/
		draw_box(1, 1, COL, ROW, 30, '#');
		draw_rect(x, y, W, H, color, '@');
		fflush(NULL);//刷新函数
		x += x_inc;
		y += y_inc;
		if (x < 2 || x + H > ROW)
		{
			x_inc = -x_inc;
			// 31 ~ 37
			color = rand() % 7 + 31; 
		}
		if (y < 2 || y + W > COL)
		{
			y_inc = -y_inc;
			color = rand() % 7 + 31; 
		}
		usleep(300000);//延迟函数
	}
	show_cur();
	return 0;
}
