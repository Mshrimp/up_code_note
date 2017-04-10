#include <stdio.h>

//函数声明
void hello(void);
void world(void);

int main(void)
{
	/*printf("hello!\n");//库函数*/

	/*hello();//函数调用*/
	world();
	test();
	
	printf("hello = %p\n", hello);//自定义函数
	return 0;
}
//函数实现
void hello(void)
{
	printf("hello!\n");//函数体
}

void world(void)
{
	printf("world!\n");
	int i;
	for (i = 0; i < 10; i++)
	{
		hello();
	}
}

void test(void)
{
	hello();
}
