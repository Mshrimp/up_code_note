#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

//函数声明
void show_student(char name[] = "none", int id = 0, int age = 0, float cn = 0.0);
//void show_student(string name, int id, int age, float cn);

int main(void)
{
	cout << "main stat!\n";

	//函数调用
	show_student();
	show_student("tom");
	show_student("jim", 10001);
	show_student("mary", 10002, 18);
	show_student("join", 10003, 19, 77.77);

	cout << "main end!\n";
	return 0;
}

//函数实现

//void show_student(char name[] = "none", int id = 0, int age = 0, float cn = 0.0)
void show_student(char name[], int id, int age, float cn)
{
	cout << "name : " << name << ", id : " << id 
		<< ", age : " << age << ", cn : " << cn << endl;
}
