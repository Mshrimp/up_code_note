#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int a = 10;

	int **p = NULL;

	p = &a;

	printf("&p = %p\n", &p);
	printf("p = %p\n", p);
	printf("*p = %p\n", *p);
	printf("**p = %d\n", **p);

	return 0;
}
