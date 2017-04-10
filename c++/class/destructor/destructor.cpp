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
	public:
		student(void);//默认构造函数
		//student(string _name = "tom", int _age = 12, char _sex = 'F', float _cn = 100);
		student(string _name, int _age, char _sex, float _cn);
		student(string _name, int _age, char _sex);
		student(string _name, int _age);
		student(string _name);
		//student(string & _name);//复制构造函数
		void set_name(string _name);
		void init_stu(string name, int age, char sex, float cn);//类的成员函数
		void show_stu(void) const;//常量函数 遍历
		~student();//析构函数
};

void callme(student stu)
{
	cout << "by value!\n";
}

//student e;

void test(void)
{
	student temp;

}
int main(void)
{
	//局部对象调用不同构造函数
    /*
	 *student stu;
	 *student one("tom");
     */

	student *p = new student;


	test();
	printf("========\n");
	//????
	//callme(one);

	//模块对象
	{
		student two("jim", 20);
	}
	cout << "hello!\n";
	delete p;

	return 0;
}

//实现析构函数
student::~student()
{
	printf("destructor!\n");
}
//自定义构造函数
student::student(string _name, int _age, char _sex, float _cn)
{

	printf("constructor four!\n");
	name = _name;
	age = _age;
	sex = _sex;
	cn = _cn;
	
}
//默认构造函数
student::student(void)
{
	printf("default constructor\n");
}
student::student(string _name, int _age, char _sex)
{
	printf("constructor three!\n");
}
student::student(string _name, int _age)
{
	printf("constructor two!\n");
}
student::student(string _name)
{
	printf("constructor one!\n");
}

//初始化函数
//实现
void student::init_stu(string m_name, int m_age, char m_sex, float m_cn)
{
	name = m_name;
	age = m_age;
	sex = m_sex;
	cn = m_cn;
}
void student::show_stu(void) const
{
	//name = "heloo";
	cout << "name : " << name << ", age : " << age
		<< ", sex : " << sex << ", cn : " << cn << endl;
}

void student::set_name(string _name)
{
	name = _name;
}
