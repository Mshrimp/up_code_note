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
};

/*
 *void callme1(student & stu)
 *{
 *    cout << "name = " << stu.name << endl;
 *    printf("callme1!\n");
 *}
 */

int main(void)
{
	student stu;
	//调用构造函数方式几种
	// 1 显式调用
	student one = student("jim");
	// 2 隐式调用
	student two();//函数声明
	//student five;
	two.show_stu();
	two.set_name("kiss");
	two.show_stu();


	//student *p = new student("ken", 123, 'M', 55);
	student *p = new student;
	//p = student("ken", 123, 'M', 55);
	p->set_name("ken");

	p->show_stu();

	delete p;


	
    /*
	 *printf("=========\n");
	 *callme1(two);
	 *printf("=========\n");
     */

	//student three[5] = {student("hello1"), student("hello2"), student("hello3", 20)};

	//three[1]("wrold1");
	
	//one.show_stu();


	return 0;
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
