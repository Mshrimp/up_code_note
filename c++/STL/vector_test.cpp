/****************************************************

****************************************************/

#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

#define ARRSIZE 10

using namespace std;

int main(void)
{
	int i;
	//int arr[ARRSIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	//vector<int>arr_vec;
	//vector<int>
	vector<int> arr(1);
	vector<int> arrt(10, 0);
	vector<string> str(10, "null"); 
	//vector<int>::iterator

	//vector<int>::size_type ix;
	int ix;
	int len;
	char buf[128];

	arr[0] = 20;
	cout << "arr[0] = " << arr[0] << endl;

	cout << "arr.empty() = " << arr.empty() << endl;
	cout << "arr.size() = " << arr.size() << endl;
	
	for (ix = 0; ix < 10; ix++)
	{
		arr.push_back(ix);
	}

	cout << "arr.empty() = " << arr.empty() << endl;
	cout << "arr.size() = " << arr.size() << endl;
	
	for (ix = 0; ix < 10; ix++)
	{
		cout << arr[ix] << "  ";
	}
	cout << endl;

	cout << "arrt.empty() = " << arrt.empty() << endl;
	cout << "arrt.size() = " << arrt.size() << endl;
	cout << "arrt[2] = " << arrt[2] << endl;

	cout << "str.empty() = " << str.empty() << endl;
	cout << "str.size() = " << str.size() << endl;
	cout << "str[2] = " << str[2] << endl;

	arrt[2] = 10;
	len = arrt.size();
	for (ix = 0; ix < len; ix++)
	{
		cout << arrt[ix] << "  ";
	}
	cout << endl;

	arrt.push_back(10);
	cout << "arrt.size() = " << arrt.size() << endl;

	len = arrt.size();
	for (ix = 0; ix < len; ix++)
	{
		cout << arrt[ix] << "  ";
	}
	cout << endl;

	len = str.size();
	for (ix = 0; ix < len; ix++)
	{
		snprintf(buf, sizeof(buf), "stu_%c%c", rand() % 26 + 'a', rand() % 26 + 'a');
		str[ix] = buf;
	}

	for (ix = 0; ix < len; ix++)
	{
		cout << str[ix] << "  ";
	}
	cout << endl;

	str.push_back("stu_xiami");

	len = str.size();
	for (ix = 0; ix < len; ix++)
	{
		cout << str[ix] << "  ";
	}

	cout << endl;




	return 0;
}
