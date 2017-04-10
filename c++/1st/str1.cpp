#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void)
{
	char s[128] = "hello";
	string str = "hello";
	// string 是一个字符集类 ，one 就是这个string类一个对象
	string one = "hello";
	string two("this is c++ program!");
	cout << "two = " << two << endl;
	string three(20, 'T');
	cout << "three = " << three << endl;
	//printf("three = %s\n", three); 不可以
	cout << "three.size() = " << three.size() << endl;
	three = "hello";
	cout << "three.size() = " << three.size() << endl;

	//string four(two);
	string four(s);
	cout << "four = " << four << endl;
	string five(&two[5], &two[11]);
	//five(s + 1, s + 3);//不可以
	cout << "five = " << five << endl;
	string six(two, 5, 10);

	one = "make";
	two = "mask";

	cout << "make > mask = " << (one > two) << endl;
	cout << "make < mask = " << (one < two) << endl;
	cout << "make == mask = " << (one == two) << endl;
	cout << "make != mask = " << (one != two) << endl;

	cout << "six = " << six << endl;


	//s = "world";
	one += "wrold";

	cout << "one = " << one << endl;
	cout << "one.size() = " << one.size() << endl;
	strcpy(s, "world");
	cout << "sizeof(s) = " << sizeof(s) << endl;
	cout << "strlen(s) = " << strlen(s) << endl;


	cout << "sizeof(s) = " << sizeof(str) << endl;
	cout << "strlen(s) = " << str.size() << endl;
	return 0;
}
