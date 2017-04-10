#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

//声明一个模板
template<typename T>
void Swap(T &a, T &b);

struct student{
	char name[128];//string
	int id;
	int age;
	char sex;
	double result;
};

//声明显式具体化
template <> void Swap<student>(student & stu1, student & stu2);
//template <> void Swap(student & stu1, student & stu2);

//函数声明
void show(char *s, student stu)
{
	cout << s << " : ";
	cout << stu.name << " | "
		<< stu.id << " | "
		<< stu.age << " | "
		<< stu.sex << " | "
		<< stu.result << endl;
}
int main(void)
{
	student stu1 = {"tom", 10099, 18, 'M', 99.9};
	student stu2 = {"jim", 10001, 20, 'F', 77.7};

	show("student1", stu1);
	show("student2", stu2);
	Swap(stu1, stu2);
	show("student1", stu1);
	show("student2", stu2);

	return 0;
}
template<typename T>
void Swap(T & a, T & b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template <> void Swap<student>(student & stu1, student & stu2)
{
	double dt;
	int agt;

	dt = stu1.result;
	stu1.result = stu2.result;
	stu2.result = dt;

	agt = stu1.age;
	stu1.age = stu2.age;
	stu2.age = agt;
}







