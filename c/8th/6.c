#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int **p = NULL;

	printf("&p = %p\n", &p);

	p = (int **)malloc(sizeof(int *));
	if (p == NULL)
	{
		printf("malloc p!\n");
		return -1;
	}
	*p = (int *)malloc(sizeof(int));
	if (*p == NULL)
	{
		printf("malloc *p!\n");
		free(p);
		return -1;
	}

	printf("p = %p\n", p);
	printf("*p = %p\n", *p);
	**p = 10;

	printf("**p = %d\n", **p);
	return 0;
}
