#include <stdio.h>

static int e = 123;

static void hello(void)
{
	/*printf("hello : e = %d\n", e);*/
	printf("hello!\n");
}

void world(void)
{
	hello();
	printf("world!\n");
}
