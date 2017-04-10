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
		student(void);//构造函数
		student(string _name, int _age, char _sex, float _cn);
		student(string _name, int _age, char _sex);
		student(string _name, int _age);
		student(string _name);
		//student(string & _name);
		void init_stu(string name, int age, char sex, float cn);//类的成员函数
		void show_stu(void) const;
};

int main(void)
{
	student p[10];

	//显式调用构造函数
	#if 0
	student stu = student("tom", 20, 'M', 88.89);//定义类对象
	#else
	#endif
	//student stu = init_stu{"tom", 20, 'M', 88.8};//定义类对象
	//stu.student("tom", 20, 'F', 12.21);
	
    /*
	 *student one;
	 *student two("tom");
	 *student three("jim", 12);
	 *student four("mary", 34, 'F');
	 *student stu("jim", 19, 'F', 77.7);
	 *stu.show_stu();
     */
    /*
	 *stu.init_stu("tom", 20, 'M', 99.9);
	 *stu.show_stu();
     */
	return 0;
}

//默认构造函数
student::student(void)
{
	printf("default constructor\n");
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
