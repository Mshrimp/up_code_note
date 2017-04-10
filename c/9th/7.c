#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//函数
void hello(void)
{
	printf("helo!\n");
}

void test(void)
{
	printf("test!\n");
}

void world(void (*func)(void))
{
	func();
	printf("world!\n");
}

int main(void)
{
	void *p = NULL;
	
	void hello(void);//声名一个函数

	//定义一个函数指针
	void (*func)(void);

	void (*FUNC)(void (*func)(void));

	func = hello;
	FUNC = world;

	printf("func = %p\n", func);
	FUNC(hello);
	FUNC(test);

	printf("sizeof(func) = %d\n", sizeof(func));
    /*
	 *p = hello;
	 *p();
     */
	/*printf("p = %p\n", p);*/
	printf("hello = %p\n", hello);
	hello();//调用函数
	return 0;
}
