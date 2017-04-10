#include <iostream>

using namespace std;
int main(void)
{
	float f = 1.2345;

	cout << "|";
	cout.fill('#');
	cout.width(10);
	cout << f;
	cout << "|" << endl;

	cout << "|";
	cout.fill(' ');
	cout.width(10);
	cout << f;
	cout << "|" << endl;

	cout << "|";
	cout.fill(' ');
	cout.width(10);
	cout << left << f;
	cout << "|" << endl;

	cout << "|";
	cout.fill(' ');
	cout.width(10);
	cout << right << f;
	cout << "|" << endl;
	return 0;
}
