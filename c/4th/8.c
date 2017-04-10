#include <stdio.h>

int main(void)
{
	int i;
	int a[10];

	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(a) = %d\n", sizeof(a));
	printf("len = %d\n", sizeof(a) / sizeof(a[0]));
	printf("&a = %p &a + 1 = %p\n", &a, &a + 1);
	printf("a = %p a + 1 = %p\n", a, a + 1);
	printf("&a[0] = %p\n", &a[0]);

	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
	}

	for (i = 0; i < 10; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
