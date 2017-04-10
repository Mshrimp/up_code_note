#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 *int *test(void)
 *{
 *    return 0;
 *}
 */
int main(void)
{
	/*int a = 10;*/
	int *p = NULL;
	//野指针，就是为初始化指针变量

	/*test();*/
	//申请空间地址
	/*p = (int *)malloc(sizeof(int));*/
	p = (int *)calloc(1, sizeof(int));
	if (p == NULL)
	{
		printf("malloc failed!\n");
		return -1;
	}
	printf("malloc *p = %d\n", *p);
	*p = 10;

	printf("p = %p\n", p);
	printf("*p = %d\n", *p);

	free(p);
	/*free(p);*/

	*p = 20;
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);
	return 0;
}
