#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>
#include <fstream>

using namespace std;

struct cls_t{
	char name[128];
	int age;
	char sex;
	float cn;
};

int main(void)
{
	struct cls_t cls = {"tom", 20, 'M', 88.88}, stu;
	fstream fout;
	fstream fin;
	//文本方式保存
    /*
	 *fout.open("stu.dat", ios_base::out | ios_base::trunc);
	 *fout << cls.name << " " << cls.age << " " 
	 *    << cls.sex << " " << cls.cn;
     */
	//二进制保存
    /*
	 *fout.open("stu.dat", ios_base::out | ios_base::trunc | ios_base::binary);
	 *fout.write((char *)&cls, sizeof cls);
     */
	
	fin.open("stu.dat", ios_base::in | ios_base::binary);
	fin.read((char *)&stu, sizeof stu);
	cout << "name : " << stu.name << endl;
	cout << "age : " << stu.age << endl;
	cout << "sex : " << stu.sex << endl;
	cout << "cn : " << stu.cn << endl;


	return 0;
}
