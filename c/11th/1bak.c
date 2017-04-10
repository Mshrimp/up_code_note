/*
	5.4-C-11th-1:
	结构体占用空间、结构体各成员变量对齐方式
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma pack

//结构体成员对齐方式会影响到结构体的大小
//结构体成员都是以偶数字节开始存储，但是连续多个字符串会挨着存储
struct a_t{	
	char ch;	
	short s;
	int i;
};

int main(void)
{
	struct a_t a;

	//&a.ch | &a.s
	printf("sizeof(a) = %d\n", sizeof(a));	//打印结构体占用空间大小
	printf("&a.ch = %p &a.s = %p\n", &a.ch, &a.s);	//打印结构体成员的地址
	return 0;
}
