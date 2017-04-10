/*
	5.3-C-10th-7
	宏定义和变量的区别
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CH +

int main(void)
{
	char ch = '+';
	/*int a:8;*/


	//printf("a + b = %d\n", 5 ch 3);	//ch为char型变量，错误用法
	printf("a + b = %d\n", 5 CH 3);		//CH为宏定义常量，在函数中会被替换

	return 0;
}
