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
	char ch;

	cout << "please input char : ";
	cin.get(ch).get();

	cout << "ch = " << ch << endl;

	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
	{
		cout << "yes!\n";
	}
	else
	{
		cout << "no!\n";
	}

	isalpha(ch);//判断是否是字母，如果是字母则返回true,如果不是则返回false

	if (isalpha(ch))
	{
		cout << "c++ yes!\n";
	}
	else
	{
		cout << "c++ no!\n";
	}
	return 0;
}
