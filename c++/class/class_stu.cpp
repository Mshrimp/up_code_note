#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;
//声明一个类
class student{
	private:
		string name;
		int age;
		char sex;
		float cn;
		void show_stu(void);
	public:
		//void init_stu(string name, int age, char sex, float cn);
		int number ;
		void init_stu(void);//类的成员函数
		void test(void)  //inline
		{
			cout << "test!\n";
		}
	protected:
		int Max;
};

//外部函数声明
/*
 *void init_stu(void);
 *void show_stu(void);
 */
int main(void)
{
	student stu;//定义类对象

	stu.number = 123;
	cout << "stu.number = " << stu.number << endl;
	stu.init_stu();//调用
	stu.test();
	//stu.show_stu();
	return 0;
}

//初始化函数
//实现
void student::init_stu(void)
{
	printf("init stu!\n");
	show_stu();
	Max = 1122;
	cout << "Max = " << Max<< endl;
}
void student::show_stu(void)
{
	printf("show stu!\n");
}
