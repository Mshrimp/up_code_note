#include <stdio.h>

#define ROW 10
#define COL 30
int main(void)
{
	int i, j;

	i = 0;
	while (i < ROW)
	{
		j = 0;
		while(j < COL)
		{
			if (i == 0 || i == ROW - 1 || j == 0 || j == COL - 1)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
