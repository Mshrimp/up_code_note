#include <stdio.h>

void pri(int num)
{
	int i;

	for (i = 0; i < num; i++)
	{
		printf("* ");
	}
}
void priline(int num)
{
	if (num == 0)
	{
		return ;
	}
	priline(num - 1);
	pri(num);
	putchar(10);
}
int main(void)
{
	priline(5);
	return 0;
}
