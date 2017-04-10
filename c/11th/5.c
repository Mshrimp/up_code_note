#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define A 0

int main(void)
{
	int a = 12;
	if (0)
	{
		printf("hello!\n");
	}
	else
	{
		printf("world!\n");
	}
	/*printf("===============\n");*/
#if 0
	printf("hello!\n");
/*#else*/
	printf("world!\n");
#endif

	return 0;
}
