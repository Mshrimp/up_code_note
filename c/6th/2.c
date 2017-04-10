#include <stdio.h>
#include <string.h>

void init(int a[][3], int size)
{
	printf("init : size = %d\n", size);
	printf("init : sizeof(a) = %d\n", sizeof(a));
	printf("init : sizeof(a[0]) = %d\n", sizeof(a[0]));
	printf("init : sizeof(a[0][0]) = %d\n", sizeof(a[0][0]));

}

void test_b(int b[][3][4])
{

}
int main(void)
{
	int a[2][3];
	int b[2][3][4];

	test_b(b);

	printf("main : sizeof(a) = %d\n", sizeof(a));
	printf("main : sizeof(a[0]) = %d\n", sizeof(a[0]));
	printf("main : sizeof(a[0][0]) = %d\n", sizeof(a[0][0]));

	init(a, sizeof(a));
	return 0;
}
