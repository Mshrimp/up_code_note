#include <stdio.h>
#include <string.h>

#define ROW 15
#define COL 50

void init(char bg[][COL], char ch)
{
	int i, j;

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (i == 0 || i == ROW - 1 || j == 0 || j == COL -1)
			{
				bg[i][j] = ch;
			}
			else
			{
				bg[i][j] = ' ';
			}
		}
	}
}

void show(char bg[][COL])
{
	int i, j;

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			putchar(bg[i][j]);
		}
		putchar(10);
	}
	
}
int main(void)
{
	char bg[ROW][COL];
	int x = 3, y = 5, x_inc = 1, y_inc = 1;


	system("clear");//清屏
	while(1)
	{
		printf("\033[1;1H");//定位
		init(bg, '#');
		bg[x][y] = '@';
		x += x_inc;
		y += y_inc;
		if (x == ROW - 1 || x == 0)
		{
			x_inc = -x_inc;
		}
		if (y == COL - 1 || y == 0)
		{
			y_inc = -y_inc;
		}
		show(bg);
		usleep(100000);//延迟函数
		fflush(NULL);//刷新函数
	}
	return 0;
}
