#include <stdio.h>
#include <string.h>

#define ROW 12
#define COL 40

void init(char bg[][COL], char ch)
{
	int i, j;

	for (i  = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (i == 0 || i == ROW - 1 || j == 0 || j == COL - 1)
				bg[i][j] = ch;
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

	for (i  = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%c", bg[i][j]);;
		}
		printf("\n");
	}

}
int main(void)
{
	char bg[ROW][COL];
	int x = 3, y = 3;

	system("clear");
	while(1)
	{
		printf("\033[1;1H");
		init(bg, '#');
		bg[x][y] = '@';
		x++;
		show(bg);
		usleep(200000);
	}
	return 0;
}
