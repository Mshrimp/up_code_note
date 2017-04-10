#include <stdio.h>

//十进制转换成二进制
void test(int num)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		if ((i + 1) % 4 == 0)
		{
			putchar(' ');
		}
		printf("%d", (num >> i) & 1);
	}
	putchar(10);
}
int main(void)
{
	int a = 123456;
	int b = 15;

	printf("b = %d\n", b);
	printf("b = %#o\n", b);
	printf("b = %#X\n", b);

	test(0);
	test(a);
	test(~a);
	test(-1);
	printf("~a = %d\n", ~a);
	return 0;
}
