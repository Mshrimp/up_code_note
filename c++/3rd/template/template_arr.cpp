#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;
struct student{
	char name[128];
	int id;
	int age;
	char sex;
	float cn;
};

//声明函数模板
//template<typename T>//or class
template<class T>//or class
void Swap(T &a, T &b);

//声明新的模板
template<typename T>
void Swap(T *a, T *b, int n);

void show(int *a)
{
	for (int i = 0; i < 5; i ++)
	{
		cout << a[i];
	}
	cout<< endl;
}
int main(void)
{
	int a = 12, b = 34;

	int arr_a[5] = {1,2,3,4,5};
	int arr_b[5] = {9,8,7,6,4};


	show(arr_a);
	show(arr_b);
	Swap(arr_a, arr_b, 5);
	show(arr_a);
	show(arr_b);

	return 0;
}

//模板定义
template<typename T>
void Swap(T & a, T & b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

//新模板实现
template<typename T>
void Swap(T *a, T *b, int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
