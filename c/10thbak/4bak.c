/*
	5.3-C-10th-4
	结构体各成员不同类型的对齐方式
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cls_t{	//5 8
    /*
	 *int age;	//4
	 *double d;
     */
	/*char sex;	//1*/
	char ch;
	char ch1;
	/*short s;//2*/
    /*
	 *char ch;
	 *int a;
     */
};

int main(void)
{
	struct cls_t cls;

	printf("age : %p sex : %p a : %p ch : %p\n", &cls.age, &cls.sex, &cls.a, &cls.ch);	//打印结构体各成员的地址

	printf("sizeof(struct cls_t) = %d\n", sizeof(struct cls_t));	//统计结构体占用空间大小

	return 0;
}
