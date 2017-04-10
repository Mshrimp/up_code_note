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
	test(-1234567);
	test(-1234567 >> 24);
	//printf("num = %d\n", 1234567 << 11);
	return 0;
}
