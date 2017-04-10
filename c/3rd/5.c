#include <stdio.h>

int main(void)
{
	int i, j;

	i = 1;
	while (i < 10)
	{
		j = 1;
		while (j <= i)
		{
			printf("%d * %d = %2d  ", j, i, i * j);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("===========\n");
	i = 1;
	do{
		j = 1;
		do{
			printf("%d X %d = %2d  ", j, i, i * j);
			j++;
		}while (j <= i);
		printf("\n");
		i++;
	}while (i < 10);
	return 0;
}












