#include <stdio.h>

int main(void)
{
	enum {one, two = 10, three, four = 3.44, five};

	printf("one = %d\n", one);
	printf("two = %d\n", two);
	printf("three = %d\n", three);
	printf("four = %d\n", four);
	printf("five = %d\n", five);
}
