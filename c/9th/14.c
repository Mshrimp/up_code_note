#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INT int*
/*typedef int * INT;*/


int main(void)
{
	INT a = NULL, b = NULL;

	printf("a = %p b = %p\n", a, b);
	return 0;
}
