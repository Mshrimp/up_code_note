#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef void (FUNC)(void);

void hello(void)
{
	printf("hello!\n");
}

int main(void)
{
	/*void (*FUNC)(void);*/
	FUNC *func;
	func = hello;

	func();
	return 0;
}
