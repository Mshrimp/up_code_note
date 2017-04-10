#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a ＝ 30;//全局变量

void test(int a)
{
	/*int a;*/
	printf("env : a = %d %p\n", a, &a);
}
int main(void)
{
	printf("main env : a = %d %p\n",a, &a);
	int a = 10;//局部变量
	{
		int a = 20;//模块变量
		printf("mode : a = %d %p\n", a, &a);
	}
	printf("main : a = %d %p\n", a, &a);

	test(a);
	return 0;
}
