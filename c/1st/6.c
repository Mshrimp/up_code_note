#include <stdio.h>

int main(void)
{
	int a = 2, b = 3;

	printf("a > b = %d\n", a > b);//0
	printf("a >= b = %d\n", a >= b);//0
	printf("a < b = %d\n", a < b);//1
	printf("a <= b = %d\n", a <= b);//1
	printf("a != b = %d\n", a != b);//1
	printf("a == b = %d\n", a == b);//0
	return 0;
}
