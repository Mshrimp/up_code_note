#include <stdio.h>
#include <string.h>

int main(void)
{
	//char * short * int *  
	int a = 10;
	char c;
	int *p = &a;
	char *ch = &c;

	
	printf("sizeof(p) = %d\n", sizeof(p));
	printf("sizeof(char *) = %d\n", sizeof(char *));
	printf("sizeof(short *) = %d\n", sizeof(short *));
	printf("sizeof(int *) = %d\n", sizeof(int *));
	printf("sizeof(long *) = %d\n", sizeof(long *));
	printf("sizeof(float *) = %d\n", sizeof(float *));
	printf("sizeof(double *) = %d\n", sizeof(double *));
	printf("sizeof(long double *) = %d\n", sizeof(long double *));
	/*printf("sizeof(*ch) = %d\n", sizeof(*ch));*/

	return 0;
}
