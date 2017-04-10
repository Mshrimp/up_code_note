#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

void Swap1(int a, int b);//普通变量
void Swap2(int & a, int & b);//引用
void Swap3(int *a, int *b);//指针

void Swap2(int &a, int &b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
int main(void)
{
	int a = 10;
	int b = 20;

	printf("before : a = %d b = %d\n", a, b);
	Swap2(a, b);
	printf("after  : a = %d b = %d\n", a, b);

	int d[5] = {1,2,3,4,5};
	int & c = a;//c引用变量

	c = b;

	//b = 20;
	c = 30;

	printf("d[0] = %d\n", d[0]);
	printf("&a = %p\n", &a);
	printf("&c = %p\n", &c);
	printf("a = %d b = %d\n", a, b);
	printf("c = %d\n", c);
	return 0;
}
