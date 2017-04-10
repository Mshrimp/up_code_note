#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test(void)
{
	printf("test : line = %d\n", __LINE__);
	printf("test : func = %s\n", __func__);
	printf("main : file = %s\n", __FILE__);
}
int main(void)
{

	printf("main : line = %d\n", __LINE__);
	printf("main : func = %s\n", __func__);
	printf("main : file = %s\n", __FILE__);
	printf("main : time = %s\n", __TIME__);
	printf("main : date = %s\n", __DATE__);
	printf("============\n");
	test();
	return 0;
}
