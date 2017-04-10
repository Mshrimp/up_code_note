#include <stdio.h>

int main(void)
{
	int a, b;

	printf("please input numnbers : ");
	scanf("%d%d", &a, &b);

	if (a > b)
	{
		printf("max = %d\n", a);
	}
	else
	{
		printf("max = %d\n", b);
	}
	return 0;
}
