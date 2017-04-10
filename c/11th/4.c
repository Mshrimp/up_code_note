#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.14

void test(void)
{
	printf("test : PI = %.2f\n", PI);
}

#undef PI
int main(void)
{

	test();
	/*printf("main : PI = %.2f\n", PI);*/
	return 0;
}
