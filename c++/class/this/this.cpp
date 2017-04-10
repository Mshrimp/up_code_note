#include "this.h"

//实现析构函数
student::~student()
{
	//printf("destructor!\n");
}
//自定义构造函数
student::student(string _name, int _age, char _sex, float _cn)
{
	name = "nono";
	age = 20;
	sex = 'M';
	cn = 99.0;
	
}
void student::show_stu(void) const
{
	//name = "heloo";
	cout << "name : " << name << ", age : " << age
		<< ", sex : " << sex << ", cn : " << cn << endl;
}

student & student::max_stu(student & stu1)
{
	if (stu1.cn >= cn)
	{
		return stu1;
	}
	else
	{
		return *this;
	}
}

