#include <stdio.h>

void test(int a)
{
	printf("test a = %d\n", a);
}
void test(char *s)
{
	printf("s = %s\n", s);
}
int main(void)
{
	test(10);
	test("tom");
	return 0;
}
