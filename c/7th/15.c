#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	/*const int a = 10;*/
	int a = 10;
	int b = 20;
	/*const int *p = &a;//可以修改变量地址，不可以修改变量值*/
	int const *p = &a;
	/*int * const p =&a;//可以修改变量值，但不可以修改变量地址*/
	/*const int * const p =&a;//地址和值都不可以修改*/

	/*p = &b;//修改地址*/
	*p = 30;//修改变量值

	/*printf("a = %d\n", a);*/
	return 0;
}
