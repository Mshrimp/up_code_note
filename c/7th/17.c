#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int *p = NULL;
	int a[5] = {1,2,3,4,5};

	p = a;

	p[0] = 1122;

	printf("sizeof(a) = %d\n", sizeof(a));
	printf("sizeof(p) = %d\n", sizeof(p));

	printf("a = %p a + 1 = %p\n", a, a + 1);
	printf("p = %p p + 1 = %p\n", p, p + 1);
	for (i = 0; i < 5; i++)
	{
		/*printf("a[%d] = %d\n", i, a[i]);*/
		printf("a[%d] = %d %p %p \n", i, *(a + i), a + i, p + i);
		/*printf("p[%d] = %d\n", i, p[i]);*/
		/*printf("p[%d] = %d\n", i, *(p + i));*/
	}

	return 0;
}
