#include <stdio.h>

int flower(int num)
{
	int sum = 0;
	int bit;

	while(num)
	{
		bit = num % 10;
		sum += bit * bit * bit;
		num /= 10;
	}
	return sum;
}
int main(void)
{
	int i;

	for(i = 2; i < 1000; i++)
	{
		if (i ==flower(i))
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
