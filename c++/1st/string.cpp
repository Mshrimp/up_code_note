#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

int main(void)
{
	char s[128] = "klsdhfj";
	string str = "dfjsk";
	string one("hello");
	string two("world");

	cout << "please input string : ";
	getline(cin, str);
	//cin.get(cin, str);//不可以用
	
	str = one + two;
	cout << "str = " << str << endl;
	cout << "str.size() = " << str.size() << endl;

	return 0;
}
