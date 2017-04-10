#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int *p = NULL;

	p = (int *)malloc(sizeof(int));

	printf("1st : p = %p\n", p);
	*p = 10;

	/*p = (int *)malloc(sizeof(int) * 2);*/
	p = (int *)realloc(p, sizeof(int) * 2);

	printf("2nd : p = %p\n", p);
	*(p + 1) = 20;

	printf("*p = %d\n", *p);
	printf("*(p + 1) = %d\n", *(p + 1));
	/*free(p);*/
	free(p);
	return 0;
}
