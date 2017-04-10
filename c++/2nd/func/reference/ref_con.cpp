#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

void test(const int & a)
{
	//a = 456;
	printf("test = %d a = %p\n", a, &a);
}
int main(void)
{
	int a = 123;

	test(a);
	a = 456;

	cout << "main : a = " << a << " &a = " << &a << endl;
	return 0;
}
