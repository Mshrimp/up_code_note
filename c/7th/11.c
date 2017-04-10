#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int e;//BSS
int ee = 10;//RO
int main(void)
{
	int a;
	int c;

	static int b;
	int *p = NULL, *q = NULL;

	p = (int *)malloc(sizeof(int));
	if (NULL == p)
	{
		return -1;
	}
	q = (int *)malloc(4);

	printf("&a = %p\n", &a);// stack
	printf("&c = %p\n", &c);
	printf("p = %p\n", p);//heap
	printf("q = %p\n", q);//heap
	printf("e = %p\n", &e);
	printf("ee = %p\n", &ee);
	printf("hello = %p\n", "hello");
	printf("&b = %p\n", &b);
	return 0;
}
