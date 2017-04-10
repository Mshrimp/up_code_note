#include <stdio.h>

int main(void)
{
	int a = 1, b = 2;
	int tmp;

	printf("please input two numbers : ");
	scanf("%d%d", &a, &b);

	printf("first : \n");
	printf("before : a = %d b = %d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("after  : a = %d b = %d\n", a, b);

	printf("second : \n");
	printf("before : a = %d b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after  : a = %d b = %d\n", a, b);

	printf("third : \n");
	printf("before : a = %d b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after  : a = %d b = %d\n", a, b);



	return 0;
}
