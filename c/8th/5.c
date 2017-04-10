#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int a = 10;
	int b = 20;
	int *p1 = &a;
	int *p2 = &b;
	int **q1 = &p1;
	int **q2 = &p2;
	int **tmp;

	tmp = q1;
	q1 = q2;
	q2 = tmp;

	printf("a = %d b = %d\n", a, b);//20 10 | 10 20 | 10 20
	printf("*p1 = %d *p2 = %d\n", *p1, *p2);// 20 10 | 20 10 | 10 20
	printf("**q1 = %d **q2 = %d\n", **q1, **q2);// 20 10 | 20 10 | 20 10


	
	
	/***q = 20;*/
	/**q = &b;*/
	/*q = &p2;*/

    /*
	 *printf("a = %d\n", a);//10
	 *printf("*p1 = %d\n", *p1);//10
	 *printf("**q = %d\n", **q);//20
     */
	return 0;
}
