#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i = 10, j = 20;
	int *v = &j;
	int a[2][3] = {1,2,3,4,5,6};
	int b[5] = {11, 22, 33, 44, 55};
	/*int **p = NULL;*/
	int (*p)[3];//数组指针
	int *q[5] = {&i, v, b, a[0], NULL};//指针数组

	printf("b = %p\n", b);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(q[2] + i));
	}
	printf("\n");
	printf("i = %d\n", i);
	printf("*q[0] = %d\n", *q[0]);
	printf("a[1] = %d\n", *q[1]);

	printf("sizeof(q) = %d\n", sizeof(q));
	
	p = a;
	printf("sizeof(a) = %d\n", sizeof(a));
	printf("sizeof(p) = %d\n", sizeof(p));//12 4 8 

	/*p = a;*/

	//&a a a[0]
	//&p p *p
	printf("&p = %p, &p + 1 = %p\n", &p, &p + 1);
	printf("p = %p p + 1 = %p\n", p, p + 1);
	printf("*p = %p *p + 1 = %p\n", *p, *p + 1);
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			/*printf("a[%d][%d] = %d\n", i, j, p[i][j]);*/
			/*printf("p[%d][%d] = %d\n", i, j, *(*(p + i) + j));*/
			/*printf("p[%d][%d] = %d\n", i, j, (*(p + i))[j]);*/
			/*printf("p[%d][%d] = %d\n", i, j, p[i][j]);*/
			printf("p[%d][%d] = %d : %p\n", i, j, *(*(a + i) + j), &a[i][j]);
		}
	}
	return 0;
}
