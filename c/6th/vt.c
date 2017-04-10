#include <stdio.h>
#include <string.h>

void gotoxy(int x, int y)
{
	printf("\033[%d;%dH", x, y);
}
void putch(char ch, int color, int bcolor)
{
	printf("\033[%d;%dm%c\033[0m", color, bcolor, ch);
}
void putstr(char s[], int color, int bcolor)
{

}
void move_up(int bit)
{

}
void move_down(int bit)
{

}
void move_left(int bit)
{

}

void move_right(int bit)
{

}
void cur_save(void)
{

}

void cur_load(void)
{

}
void cur_show(void)
{

}
void cur_hide(void)
{

}

void draw_vline(int x, int y, int len, char ch, int color)
{

}

void draw_hline(int x, int y, int len, char ch, int color)
{

}

void draw_box(int x, int y, int h, int w, char ch, int color)
{

}

void draw_rect(int x, int y, int h, int w, char ch, int color)
{

}

int main(void)
{
	gotoxy(5, 10);
	putch('A', 31, 10);
	putch('A', 32, 10);
	return 0;
}
