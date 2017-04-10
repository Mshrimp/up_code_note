#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*extern e;//声明一个外部变量*/

/*int a = 30;*/
/*static void hello(void);*/

void test(void)
{
	static int count = 5;//局部变量

	if (count == 0)
	{
		return ;
	}
	printf("test!\n");
	count--;
	test();
}
int main(void)
{
	//修饰符
    /*
	 *static 		静态变量
	 *auto		动态变量
	 *const		常量
	 *signed		有符号
	 *unsigned	无符号  %u
	 *register	寄存器变量
	 *extern		外部变量
	 *volatile	防止优化
     */

	/*printf("e = %d\n", e);*/
	/*test();*/
	/*hello();*/
	world();
	
	return 0;
}
