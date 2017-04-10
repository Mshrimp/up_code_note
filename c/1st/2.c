#include <stdio.h>

int main(void)
{
	char ch;

	short s = 32767 + 1;// -32768 ~ 32767
	int i = 32769;//-2147483648 ~ 2147483647
	printf("i = %d\n", i);
	printf("s = %d\n", s);

	printf("sizeof(ch) = %d\n", sizeof(ch));
	printf("sizeof(char) = %d\n", sizeof(char));
	printf("sizeof(short) = %d\n", sizeof(short));
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(long) = %d\n", sizeof(long));
	printf("sizeof(float) = %d\n", sizeof(float));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("sizeof(long double) = %d\n", sizeof(long double));
	return 0;
}
