#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int *p = NULL;

	p = (int *)malloc(sizeof(int) * 5);//8
	if (NULL == p)
	{
		printf("malloc failed!\n");
		return -1;
	}

	printf("sizeof(p) = %d\n", sizeof(p));
	printf("sizeof(&p) = %d\n", sizeof(&p));
	printf("sizeof(*p) = %d\n", sizeof(*p));
	printf("p = %p\n", p);
	printf("&p = %p\n", &p);
	free(p);
	return 0;
}
