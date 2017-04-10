/*
	5.3-C-10th-5
	结构体对其方式设定
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//指定结构体各变量的对齐方式 参数只能是2的幂
#pragma pack(1)
struct a_t{
	int p;
	char ch;
};
#pragma pack(0) //恢复结构体默认对齐方式

struct b_t{
	int p;
	char ch;
};
int main(void)
{
	printf("sizeof(struct a_t) = %d\n", sizeof(struct a_t));	
	printf("sizeof(struct b_t) = %d\n", sizeof(struct b_t));	
	return 0;
}
