#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	//定义输出流来管理文件
	ofstream fout;
	int a = 123;

	//打开文件
	fout.open("test.txt");

	if (!fout.is_open())
	{
		cout << "open failed!\n";
		return -1;
	}
	fout << "hello";
	cout << a;
	fout << a;
	fout << " " << argv[1];
    /*
	 *while(1)
	 *{
	 *    sleep(1);
	 *}
     */
	
	fout.close();//关闭文件
	return 0;
}
