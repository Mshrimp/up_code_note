#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test(int ***p)
{
	printf("&p = %p\n", &p);
	printf("p = %p\n", p);

	*p = (int **)malloc(sizeof(int *));
	if (NULL == *p)
	{
		return ;
	}
	printf("*p = %p\n", *p);

	**p = (int *)malloc(sizeof(int));
	if (NULL == **p)
	{
		free(*p);
		return ;
	}
	printf("**p = %p\n", **p);


}

int **test1(void)
{
	int **p = NULL;
	p = (int **)malloc(sizeof(int *));
	if (p == NULL)
	{
		printf("malloc p!\n");
		return ;
	}
	*p = (int *)malloc(sizeof(int));
	if (*p == NULL)
	{
		printf("malloc *p!\n");
		free(p);
		return;
	}

	return p;
}
int main(void)
{
	int **p = NULL;

	printf("main : &p = %p\n", &p);
	/*test(&p);*/
	p = test1();

	**p = 10;
	printf("**p = %d\n", **p);

	free(*p);
	free(p);
	return 0;
}
