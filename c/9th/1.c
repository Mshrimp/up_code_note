#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int s[128];
	int *v = NULL;

	v = s;

	int a[2][3] = {1, 2, 3, 4, 5, 6};
	int (*p)[3];//数组指针
	
	int b[2][3][4];
	int (*q)[3][4];

	int c[2][3][4][5];
	int (*w)[3][4][5];

	w = c;

	p = a;
	q = b;
    /*
	 *int **p = NULL;
	 *int ****q = NULL;
     */

	//&q + 1 => 4
	// q + 1 => 4
	// *q + 1 => 4
	// **q + 1 => 4
	// ***q + 1 => 4

    /*
	 *十六进制：		十进制
	 *    10 -> a A   	a -> 97
	 *    11 -> b B		b -> 98
	 *    12 -> c C
	 *    13 -> d D
	 *    14 -> e E
	 *    15 -> f F
	 *    16 -> 10
     */

	// *
    /*
	 * a * b;
	 *p = a;
     */



	//a *a **a

/*
 *    printf("**a = %d\n", **a);
 *    printf("**(a + 1) = %d\n", **(a + 1));
 *
 *    *(*(a + 1) + j)
 *
 */

	return 0;
}
