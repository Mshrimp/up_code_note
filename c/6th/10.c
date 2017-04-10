#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;

	printf("\033[2J");
	printf("\033[3;5H\033[31m清华大学教务管理系统(V1.0)\033[0m\n");
	printf("\033[7;30H\033[32m系统加载中....\033[0m");
	for (i = 0; i < 20; i++)
	{
		printf("\033[5;10H");
		for (j = 0; j <= i; j++)
		{
			printf("=");
		}
		printf(">");
		printf(" %*c%d%%", 20 - i, ' ', (i + 1) * 5);
		fflush(NULL);
		usleep(200000);
	}
	printf("\n");
	return 0;
}
