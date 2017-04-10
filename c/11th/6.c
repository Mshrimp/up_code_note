#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define A 1


int main(void)
{
#if 0
	printf("hello1!\n");
#elif 0
	printf("hello2!\n");
#elif 0
	printf("hello3!\n");
#elif 0
	printf("hello4!\n");
#else
	printf("other!\n");
#endif

#undef A

#ifdef A
	printf("world!\n");
#endif

	return 0;
}






