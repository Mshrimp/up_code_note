#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

template<typename T>
void Swap(T &, T &);

struct cls_t{
	char name[128];
	int age;
};

struct stu_t{
	int a;
	int b;
};

template<typename T>
void show(T &);


template<> void Swap<cls_t>(cls_t &, cls_t &);
//template<> void Swap<stu_t>(stu_t &, stu_t &);
template<> void Swap(stu_t &, stu_t &);

//外部显式函数 重载
void show(cls_t cls)
{
	cout << "name : " << cls.name << " | " << "age : " << cls.age << endl;
}
void show(stu_t cls)
{
	cout << "a : " << cls.a << " | " << "b : " << cls.b << endl;
}

void Swap(stu_t & stu1, stu_t & stu2);

int main(void)
{
	int a = 10;
	double d = 3.33;
	cls_t cls1 = {"jiim", 19}, cls2 = {"toom", 20};
	stu_t stu1 = {123, 456}, stu2 = {1122, 3355};

    /*
	 *show(cls1);
	 *show(cls2);
	 *Swap(cls1, cls2);
	 *show(cls1);
	 *show(cls2);
     */

	show(stu1);
	show(stu2);
	Swap(stu1, stu2);
	show(stu1);
	show(stu2);
	return 0;
}
//模板交换函数
template<typename T>
void Swap(T & a, T & b)
{
	T temp;
	 temp = a;
	 a = b;
	 b = temp;
}

//模板显式函数
template<typename T>
void show(T & a)
{
	cout << "a = " << a << endl;
}

//显式具体化
template<> void Swap<cls_t>(cls_t & cls1, cls_t & cls2)
{
	int temp;
	
	temp = cls1.age;
	cls1.age = cls2.age;
	cls2.age = temp;
}

template<> void Swap(stu_t & stu1, stu_t & stu2)
{
	int temp;
	
	printf("template!\n");
	temp = stu1.b;
	stu1.b = stu2.b;
	stu2.b = temp;
}

void Swap(stu_t & stu1, stu_t & stu2)
{
	int temp;
	
	printf("func!\n");
	temp = stu1.b;
	stu1.b = stu2.b;
	stu2.b = temp;
	
}
