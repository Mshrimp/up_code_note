#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

int main(void)
{
	int a = 10;
	int & b = a;

	
	cout << "a = " << a << ", b = " << b << endl;
	cout << "&a = " << &a << ", &b = " << &b << endl;
	b++;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "&a = " << &a << ", &b = " << &b << endl;

	return 0;
}
