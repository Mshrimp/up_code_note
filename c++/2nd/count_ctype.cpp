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
	string str;
	int i;
	int chars = 0;
	int spaces = 0;
	int digits = 0;
	int puncts = 0;
	int others = 0;

	cout << "strlen(str) = " << str.size() << endl;

	printf("please input string : ");
	getline(cin, str);


	cout << "str = " << str << endl;
	cout << "strlen(str) = " << str.size() << endl;

	for (i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]))
		{
			chars++;
		}
		else if (isspace(str[i]))
		{
			spaces++;
		}
		else if (isdigit(str[i]))
		{
			digits++;
		}
		else if (ispunct(str[i]))
		{
			puncts++;
		}
		else
		{
			others++;
		}
		//cout.put(str[i]);
	}
	cout << "chars = " << chars << ", spaces = " << spaces
		<< ", digits = " << digits << ", puncts = " << puncts
		<< ", others = " << others << endl;

	return 0;
}
