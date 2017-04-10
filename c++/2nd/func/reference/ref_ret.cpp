#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

int test3(void)
{
	int temp = 30;

	return temp;
}
int & test(void)
{
	//static int temp = 20;
	int *p = NULL;

	p = new int;

	*p = 20;

	printf("test : p = %p\n", p);
	return *p;
}
int & test2(int & a)
{
	a = 1122;

	return a;
}
void test1(void)
{
	volatile int b = 40;
}

int &  hello(int a)
{
	return a;
}
int main(void)
{
	int ret;
	int temp = 123;

	//printf("ret = %p\n", &ret);
	ret = hello(temp);
	printf("ret = %p\n", &ret);

	//ret = test2(ret);
	test1();

	printf("ret = %d\n", ret);

	return 0;
}
