#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROW 10
#define COL 10

void init(int (*bg)[COL])//数组指针
{
	int i, j;

	printf("  ");
	for (i = 0; i < COL; i++)
	{
		printf("%-2d", i);
	}
	printf("\n");
	for (i = 0; i < ROW; i++)
	{
		printf("%d ", i);
		for (j = 0; j < COL; j++)
		{
			if (bg[i][j] == 0)
			{
				printf("+ ");
			}
			else if (bg[i][j] == 1)
			{
				printf("\033[31mA\033[0m ");
			}
			else if (bg[i][j] == -1)
			{
				printf("B ");
			}
		}
		printf("\n");
	}
}

int check(int (*bg)[COL], int x, int y)
{
	if (bg[x][y] == 1 || bg[x][y] == -1)
	{
		return 1;
	}

	if (x < 0 || x > ROW - 1 || y < 0 || y > COL - 1)
	{
		return 1;
	}

	return 0;
}

int game_1(int (*bg)[COL], int x, int y, int flag)
{
	int count = 0;
	int i;

	//判断行 x不变
	for (i = y - 4; i <= y + 4; i++)
	{
		if (i < 0 || i > COL - 1)
		{
			continue;
		}

		if (bg[x][i] == flag)
		{
			count++;
			/*printf("count = %d\n", count);*/
			if (count == 5)
			{
				return 1;
			}
		}
		else
		{
			count = 0;
		}
	}
	return 0;
}
int main(void)
{
	int bg[ROW][COL] = {};	
	int x, y, flag = 1;
	int quit = 0;
	// 1 -> 白子 -> A  -1 -> 黑子 -> B

	while(!quit)
	{
		system("clear");
		init(bg);
		printf(" %s下子: ", flag == 1 ? "红子" : "黑子");
		scanf("%d%d", &x, &y);
		if(check(bg, x, y))
		{
			continue;
		}
		bg[x][y] = flag;

		if (game(bg, x, y, flag))
		{
			system("clear");
			init(bg);
			printf("恭喜 %s 获得胜利!\n", flag == 1 ? "红子" : "黑子");
			ch = getchar();
			if (ch = 'y')
				quit = 0;
			else
				quit = 1;
			//break;

		}

		flag = -flag;

		usleep(100000);
		fflush(NULL);
	}

	return 0;
}
