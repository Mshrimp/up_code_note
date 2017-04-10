#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROW 12
#define COL 40
#define NUM 3

struct ball_t{
	int x;
	int y;
	int x_inc;
	int y_inc;
	int w;
	int h;
	int color;
	char ch;
};

void move(struct ball_t *ball)
{
	ball->x += ball->x_inc;
	ball->y += ball->y_inc;
	if (ball->x < 2 || ball->x + ball->h > ROW)
	{
		ball->x_inc = -ball->x_inc;
		ball->color = rand() % 7 + 31;
	}
	if (ball->y < 2 || ball->y + ball->w > COL)
	{
		ball->y_inc = -ball->y_inc;
		ball->color = rand() % 7 + 31;
	}
}

void draw_ball(struct ball_t *ball)
{
	draw_rect(ball->x, ball->y, ball->w, ball->h, ball->color, ball->ch);
}

void test(struct ball_t *ball, void (*func)(struct ball_t *))
{
	int i;

	for (i = 0; i < NUM; i++)
	{
		func(&ball[i]);
	}
}
int main(void)
{
	struct ball_t ball[NUM] =  {{3, 3, 1, 1, 5, 3, 32, '@'},
								{5, 20, -1, -1, 3, 2, 35, '&'},
								{8, 30, 1, -1, 4, 2, 33, '*'}};

	hide_cur();
	while(1)
	{
		gotoxy(1, 1);
		draw_box(1, 1, COL, ROW, 10, '#');
		/*draw_ball(&ball);*/
		test(ball, draw_ball);
		test(ball, move);
		/*move(&ball);*/
		fflush(NULL);
		usleep(300000);
	}
	show_cur();
	return 0;
}
