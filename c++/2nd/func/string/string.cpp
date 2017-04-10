#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

#define MAX 5

void show(string & str)
{
	str = "hello!";
	cout << "str = " << str << endl;
}
void display(string name[])
{
	int i;
	for (i = 0; i < MAX; i++)
	{
		cout << name[i] << " ";
	}
	cout << endl;
}
int main(void)
{
	int i;
	string one("this is c++ program!");
	string str[MAX] = {"hello", "wrold"};

	for (i = 0; i < MAX; i++)
	{
		cout << "please input " << i + 1 << " string : ";
		//get()
		getline(cin, str[i]);
	}

	display(str);
	
	printf("==============\n");
	cout << "str.size() = " << sizeof(str) << endl;
	cout << "str[0] = " << str[0] << endl;
	cout << "str[1] = " << str[1] << endl;
	show(one);

	cout << "one = " << one << endl;
	return 0;
}
