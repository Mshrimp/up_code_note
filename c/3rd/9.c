#include <stdio.h>

int main(void)
{
	int num;
	int i;

	while (1)
	{
		printf("%c ", rand() % 26 + 'a');
		fflush(NULL);
		usleep(100000);
	}
	//
	/*while (1)*/
	srand(time(NULL));
	for (i = 0; i < 7; i++)
	{
		
		if (i == 6)
		{
			printf(" + \033[31m%d\033[0m", rand() % 32 + 1);
		}
		else
		{
			printf("%d ", rand() % 32 + 1);
		}
		fflush(NULL);
		usleep(10000);
	}
	printf("\n");
	return 0;
}
