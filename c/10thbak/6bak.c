/*
	5.3-C-10th.6
	结构体位宽、位段
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//定义结构体变量的位宽
struct cls_t{
	unsigned int a : 8;
	/*int b : ;*/
	/*char name[10];*/
};

int main(void)
{
	
	struct cls_t a;

	a.a = 255 + 1;	//unsigned int型溢出后为0
	printf("a.a = %d\n", a.a);
	printf("sizeof(struct cls_t) = %d\n", sizeof(struct cls_t));//打印结构体占用的内存空间
	//尽管使用位宽，但是结构体占用空间以默认4字节为单位

	return 0;
}


