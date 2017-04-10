#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int **test(int a, int b)
{
	int **p = NULL;
	int i;

	p = (int **)malloc(sizeof(int *) * a);
	if (p == NULL)
	{
		return NULL;
	}
	for (i = 0; i < a; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * b);
		if (p[i] == NULL)
		{
			while(i--)
			{
				free(p[i]);
			}
			free(p);
			return NULL;
		}
		//*(p + i)
	}
	
	return p;
}
int main(void)
{
	int i, j;
	int **p = NULL;

	p = test(2, 3);
	//a[2][3];
	for (i = 0; i< 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			p[i][j] = rand() % 100;
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", p[i][j]);
		}
	}
	printf("\n");

	for (i = 0; i < 2; i++)
	{
		free(p[i]);
	}
	free(p);

	return 0;
}
