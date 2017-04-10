#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

void test(int a, char *s);
void test(int a);
void test(int & a);
void test(const int & a);

//int test(int a, int b);

int main(void)
{
	int a = 123;

	test(a);
	return 0;
}

void test(int a, char *s)
{
	cout << "test -> two" << endl;
}
void test(int a)
{
	cout << "test -> one" << endl;
}

void test(int & a)
{
	cout << "reference one " << endl;
}
