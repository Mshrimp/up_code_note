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
	int a = 7, b = 3;

	test(a);
	test(b);
	test(a ^ b);
	printf("a & b = %d\n", a & b);//0 2 3 11
	printf("a | b = %d\n", a | b);//7

	
	printf("~7 = %d\n", ~7);
	return 0;
}
