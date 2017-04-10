#include <stdio.h>

void test(int a)
{
	a = 30;
	printf("test a = %d\n", a);
}

int add(int a, int b)
{
	printf("add a = %d b = %d\n", a, b);

	return a + b;
}

void swap(int a, int b)
{
	int tmp;
	printf("swap : before a = %d %p b = %d %p\n", a, &a, b, &b);
	
	tmp = a;
	a = b;
	b = tmp;
	printf("swap : after  a = %d b = %d\n", a, b);
	
}
int main(void)
{
	int a = 10, b = 20;

	a = 19;

	printf("main : before : a = %d &a = %p b = %d &b = %p\n", a, &a, b, &b);
	swap(a, b);
	printf("main : after  : a = %d b = %d\n", a, b);
	test(a);
	printf("add = %d\n", add(a, 5));

	return 0;
}
