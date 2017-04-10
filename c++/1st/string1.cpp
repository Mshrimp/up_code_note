#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

int main(void)
{
	char s[128];
	string str;

	cout << "please input string : ";
	//cin.getline(s, 128, '#');
	getline(cin, str, 'A');
	cout << "s = " << str << endl;

	cout.put('S').put('V');
	return 0;
}
