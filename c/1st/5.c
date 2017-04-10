#include <stdio.h>

int main(void)
{
	int a = 2, b = 3, c = 0;
	int d = 5;
	// 5 1 0 
	printf("!!d = %d\n", !!d);//


	
	printf("a || ++b = %d\n", a && ++b);
	printf("b = %d\n", b);

	printf("a && c || b = %d\n", a && c || b);//0
	printf("a || c && b = %d\n", a || c && b);//1


	return 0;
}
