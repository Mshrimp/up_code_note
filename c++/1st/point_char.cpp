#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

int main(void)
{
	char buf[128];
	int *str = NULL;
	int i;

	buf[40] = 'A';
	cout << "str = " << str << endl;
	str = new (buf) int [10];

	str[0] = 97;

	cout << "str = " << str << endl;
	cout << "buf = " << &buf << endl;
	
	for (i = 0; i < 10; i++)
	{
		str[i] = 'a' + i;
	}

	cout << "buf = " << buf << endl;
	cout << "buf = " << buf + 4 << endl;

	
	delete [] str;

	//cout << "buf = " << buf << endl;
	cout << "buf = " << buf + 40 << endl;
	return 0;
}
