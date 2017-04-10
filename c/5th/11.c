#include <stdio.h>
#include <string.h>

int main(void)
{
	int a[10], b[10];
	int i;
	char s1[128] = "hello", s2[128];


	memcpy(s2, s1, strlen(s1) + 1);
	printf("s2 = %s\n", s2);

	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
	}
	memset(a, 0, sizeof(a));

	printf("a : ");
	for (i = 0; i < 10; i++)
	{
		printf("%x ", a[i]);
	}
	printf("\n");

	memcpy(b, a, sizeof(int) * 5);

	printf("b : ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");

	return 0;
}
