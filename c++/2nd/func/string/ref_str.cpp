#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

string version1(const string & s1, const string & s2);
//string & version2(const string & s1, const string & s2);
string & version2(string & s1, const string & s2);
string & version3(const string & s1, const string & s2);

int main(void)
{
	string one;
	string two;
	string three;
	string * four = NULL;

	four = version3("hello", "hello");

	one = version1("hello", "###");
	cout << "one = " << one << endl;
	one = "wrold";
	cout << "===========\n";
	two = version2(one, "***");
	cout << "one = " << one << endl;
	cout << "two = " << two << endl;
	cout << "===========\n";
	three = version3("test", "...");
	cout << "three = " << three << endl;

	cout << "main : three = " << &three << endl;

	return 0;
}

string version1(const string & s1, const string & s2)
{
	string temp;

	temp = s2 + s1 + s2;

	return temp;
}

string & version2(string & s1, const string & s2)
{

	s1 = s2 + s1 + s2;

	return s1;
	
}

string & version3(const string & s1, const string & s2)
{
	string *p = NULL;

	p = new string;

	cout << "p->size() = " << p->size() << endl;
	*p = s2 + s1 + s2;
	cout << "p->size() = " << p->size() << endl;
	cout << "version3 : p = " << p << endl;
	return *p;
}
