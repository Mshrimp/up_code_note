#include <stdio.h>

int main(void)
{
	int a = 123;

	printf("&a = %p\n", &a);
	printf("hello = %p\n", "hello");
	printf("*&a = %d\n", *&a);
	return 0;
}
