#include <stdio.h>

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
	printf("\n");
}
// 0 1 2 4 -> 0
// 7 8 9 11 -> 1
// 0 -> 0 1 -> 1
int main(void)
{
	int num;

	printf("please input number : ");
	scanf("%d", &num);

	test(num);

	//0 : 0 1 => 0 
	//1 : 0 1 => 0

/*
 *    num &= ~1;
 *    num &= ~(1 << 1);
 *    num &= ~(1 << 2);
 *    num &= ~(1 << 4);
 *
 */
	num &= ~(1 | 1 << 1 | 1 << 2 | 1 << 4);
	num |= 1 << 7 | 1 << 8 | 1 << 9 | 1 << 11;

	test(num);
	return 0;
}
