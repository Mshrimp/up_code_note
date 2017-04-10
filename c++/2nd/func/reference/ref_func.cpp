#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

void test(int &a)
{
	a = 20;
	printf("test : a = %d\n", a);
}

void Swap1(int a, int b)//value
{
	printf("swap1!\n");
	int temp;
	temp = a; 
	a = b;
	b = temp;
}
void Swap2(int *a, int *b)//address
{
	printf("swap2!\n");
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void Swap3(int &a, int &b)
{
	printf("swap3!\n");
	int temp;
	temp = a; 
	a = b;
	b = temp;

}

int main(void)
{
	int a = 10, b;

	cout << "please input two numbers : ";
	cin >> a;
	cin >> b;
	cout << "a = " << a << ", b = " << b << endl;

	printf("before : main : a = %d b = %d\n", a, b);
	//test(a);
	Swap3(a, b);
	printf("after : main : a = %d b = %d\n", a, b);

	return 0;
}
