#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i < 10; i += 2)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 9; i > 0; i--)
	{
		printf("%d ", i);
	}
	putchar(10);
	return 0;
}
