#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

#define MAX 5

struct student{
	char name[128];
	int id;
	int age;
	char sex;
	float cn;
};

//声明函数模板
template<typename T>//or class
void Swap(T &a, T &b);

void Swap(int & a, int & b);

void show(student stu)
{
	printf("name : %s id : %d age : %d sex : %c cn : %.2f\n", stu.name, stu.id, stu.age, stu.sex, stu.cn);
}
int main(void)
{
	int a = 12, b = 34;
	int arr_a[MAX] = {1,2,3,4,5};
	int arr_b[MAX] = {11, 22, 33, 44, 55};


	double da = 3.44, db = 7.91;

	struct student stu1 = {"zhang san", 10001, 100, 'M', 55.5};
	student stu2 = {"li si", 10002, 80, 'F', 99.99};

	cout << "main : before : a = " << a << " b = " << b << endl;
	Swap(a, b);
	cout << "main : after  : a = " << a << " b = " << b << endl;

	cout << "main : before : da = " << da << " db = " << db << endl;
	Swap(da, db);
	cout << "main : after  : da = " << da << " db = " << db << endl;

	printf("============\n");
	show(stu1);
	show(stu2);
	Swap(stu1, stu2);
	show(stu1);
	show(stu2);
	return 0;
}

//模板函数定义
template<typename T>
void Swap(T & a, T & b)
{
	T temp;

	printf("swap T!\n");
	temp = a;
	a = b;
	b = temp;
}

//普通函数
void Swap(int & a, int & b)
{
	int temp;

	printf("arg swap!\n");
	temp = a;
	a = b;
	b = temp;
}
