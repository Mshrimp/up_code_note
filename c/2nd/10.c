#include <stdio.h>

int main(void)
{
	int a, b = 5;
	float f = 2.33;

	a = 12.3;//赋值转换
	;

	f = 123;//赋值转换

	f = 5 + 4.32;//运算转换

	printf("f = %d\n", (int)f);

	printf("a = %f\n", (float)b);

	printf("f = %f\n", f);

	return 19.2;
}
