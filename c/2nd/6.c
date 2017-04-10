#include <stdio.h>

int main(void)
{
	int a;

	a = (10,20,30);//30 10 

	printf("sizeof(a) = %d sizeof(int) = %d\n", sizeof(a), sizeof(int));
	printf("a = %d\n", a);
	return 0;
}
