#include <stdio.h>

//type char short int long float double long\ doubel
int main(void)
{
	unsigned int b = 123;
	b = 4294967295;

	int a = 1;
	short s = 123;
	char ch = 'A';
	float f = 2.33;

	printf("f = %f\n", f);
	printf("f = %g\n", f);
	printf("f = %e\n", f);

	printf("b = %u\n", b);
	printf("s = %d\n", s);
	printf("ch = %c\n", ch);

	a = 2;

	printf("const = %d\n", 1);//常量
	printf("a = %i\n", a);//变量

	return 0;
}
