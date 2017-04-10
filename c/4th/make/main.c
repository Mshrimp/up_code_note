#include "hello.h"

int main(void)
{
	printf("main stat...\n");
	hello();
	printf("add = %d\n", add(1, 2));
	printf("main end ...\n");
	return 0;
}
