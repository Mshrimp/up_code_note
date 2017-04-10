#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>
#include <fstream>

using namespace std;

int main(void)
{
    /*
	 *ifstream : 输入流
	 *ofstream : 输出流
	 *fstream  : 
     */
	char ch;
	fstream fin;
	fin.open("test.txt", ios_base::in | ios_base::out);

	if (!fin.is_open())
	{
		cout << "open read failed!\n";
		return -1;
	}

	fin << "hello";
/*
 *    fin >> ch;
 *
 *    cout << "ch = " << ch << endl;
 */

	return 0;
}
