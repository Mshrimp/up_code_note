#include <stdio.h>

int sum(int num)
{
	int data;
	printf("push= %d\n", num);
	if (num == 1)
	{
		printf("pop = %d\n", num);
		return 1;
	}
	data =  num + sum(num - 1);
	printf("pop = %d\n", num);
	return data;
}
int main(void)
{
	printf("sum = %d\n", sum(5));
	return 0;
}
