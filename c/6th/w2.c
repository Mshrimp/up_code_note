#include <stdio.h>
#include <string.h>

/*char buf[] = "0123456789abcdef";*/

void conver(int num, int bit)
{
	if (num == 0)
	{
		return ;
	}

	conver(num / bit, bit);
	/*putchar(buf[num % bit]);*/
	putchar("0123456789ABCDEF"[num % bit]);

}
int main(void)
{
	int num, bit;

	printf("plese input num and bit : ");
	scanf("%d%d", &num, &bit);

	conver(num, bit);
	putchar(10);
	return 0;
}
