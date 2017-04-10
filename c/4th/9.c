#include <stdio.h>

void init(int a[])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
}
int main(void)
{
	int i;
	int a[10];

//最大值 最小值 排序 查找 反转 循环左移(bit) 循环右移(bit)
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
	}
	printf("=========mian========\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("=======init========\n");
	init(a);
	return 0;
}
