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
	char ch;
	char buf[128];
	string str;

	ifstream fin;
	fin.open("test.txt");

	if (!fin.good())
	{
		printf("good!\n");
		return -1;
	}
	if (!fin)
	{
		printf("fin!\n");
		return -1;
	}
	if (fin.fail())
	{
		printf("failed!\n");
		return -1;
	}
	if (!fin.is_open())
	{
		printf("open read failed!\n");
		return -1;
	}

	printf("open success!\n");

	while(1)
	{
		//fin >> ch;
		fin.getline(buf, 128);
		if (fin.fail())
		//if (fin.eof())
		{
			break;
		}
		cout << buf << endl;
		fflush(NULL);
		sleep(1);
	}
	cout << endl;
/*
 *    fin >> buf;
 *    fin.getline(buf, 128);
 *    getline(fin, str);
 *
 *    cout << "ch = " << str << endl;
 */
	return 0;
}
