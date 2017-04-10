#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

int main(void)
{
	char *p = NULL;

	p = new char;
	//p = new char [1];

	*p = 'A';

	cout << "*p1 = " << *p << endl;
	delete [] p;

	return 0;
}
