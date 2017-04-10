#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void hello(void);//声明一个函数
void (*func)(void);//函数指针
int main(void)
{
	func = hello;
	func();	
	hello();
	return 0;
}

void hello(void)
{
	printf("hello!\n");
}
