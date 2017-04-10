#include <stdio.h>

void test(int a, char ch, char *s)
{
	printf("a = %d\n", a);
	printf("test a = %d ch = %c\n", a, ch);
}
int add(int a, int b)
{
	return a + b;
}

int test1(void)
{
	return add(11, 22);
}
int main(void)
{
	int a = 10000;

	printf("add = %d\n", add(add(1, 2), 3));

	add(12, 34) + 56;

	printf("test = %d\n", test1());
	/*test('a', a);*/
	test(a + 2, 'a', "hello");

	return 0;
}
