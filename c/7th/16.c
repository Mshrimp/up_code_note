#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test(int *a)
{
	*a = 20;
	printf("test : a = %d\n", *a);
}

int *test1(void)
{
	int *a = NULL;

	a = (int *)malloc(sizeof(int));
	if (NULL == a)
	{
		return NULL;
	}
	*a = 30;
	return a;
}
void test2(void)
{
	int b = 40;
}
int main(void)
{
	int a = 10;
	int *p = NULL;

	test(&a);
	printf("main : a = %d\n", a);

	p = test1();

	test2();
	printf("return : *p = %d\n", *p);

	free(p);
	return 0;
}
