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
		void init_stu(string name, int age, char sex, float cn);//类的成员函数
		void show_stu(void) const;
};

int main(void)
{
	student stu;// = {"tom", 20, 'M', 88.8};//定义类对象
	//student stu = init_stu{"tom", 20, 'M', 88.8};//定义类对象
	
	stu.init_stu("tom", 20, 'M', 99.9);
	stu.show_stu();
	return 0;
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
