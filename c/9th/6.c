#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//指针函数
int *test(void)
{
	static int a;

	printf("test!\n");

	return &a;
}

int main(void)
{
	test();
	return 0;
}
