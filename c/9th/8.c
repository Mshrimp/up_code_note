#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int INT;
typedef int (FUNC)(int, int);


void hello(void)
{
	printf("hello!\n");
}

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int dev(int a, int b)
{
	return a / b;
}

/*void test(int a, size_t b, int (*func)(int, int))*/
void test(int a, size_t b, FUNC *func)
{
	printf("value = %d\n", func(a, b));
}
int main(void)
{
	INT i = 10;
	/*void (*func)(void);*/
	/*int (*FUNC[4])(int, int) = {add, sub, mul, dev};//函数指针数组*/
	FUNC *func[4] = {add, sub, mul, dev};

	printf("i = %d\n", i);
	printf("sizeof(FUNC) = %d\n", sizeof(FUNC));

	for (i = 0; i < 4; i++)
	{
		test(5, 3, func[i]);
	}
/*
 *    test(5, 3, add);
 *    test(5, 3, sub);
 *    test(5, 3, mul);
 *    test(5, 3, dev);
 *
 *    func = hello;
 *    FUNC = add;
 *    FUNC = sub;
 *    FUNC = mul;
 */

	/*printf("add = %d\n", FUNC(12, 34));*/
	return 0;
}
