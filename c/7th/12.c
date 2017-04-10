#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int e = 20;

int main(void)
{
	int *q = NULL;

	q = (int *)malloc(4);

	q = &e;
	q = (int *)123;

	printf("&q = %p\n", &q);//stack
	printf("q = %p\n", q);//heap
	return 0;
}
