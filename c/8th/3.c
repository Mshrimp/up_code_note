#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int a = 10;
	int *p = &a;
	int **q = &p;
	int ***********************v;
	//**q *q q &q


	printf("sizeof(v) = %d\n", sizeof(v));
	printf("&a = %p a = %d\n", &a, a);
	printf("&p = %p p = %p *p = %d\n", &p, p, *p);
	printf("&q = %p q = %p *q = %p **q = %d\n", &q, q, *q, **q);

	printf("sizeof(q) = %d\n", sizeof(q));
	return 0;
}
