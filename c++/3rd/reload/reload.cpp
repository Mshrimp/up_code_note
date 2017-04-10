#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

struct cls_t{
	string name;
	int age;
	char sex;
	float cn;
	float en;
};

void print(struct cls_t stu)
{
	cout << "name : " << stu.name << ", "
		<< "age : " << stu.age << ", "
		<< "sex : " << stu.sex << ", "
		<< "cn : " << stu.cn << ", "
		<< "en : " << stu.en << endl;
}
void print(string name)
{
	cout << "name : " << name << endl;

}
void print(string name, int age)
{
	cout << "name : " << name << ", "
		<< "age : " << age << endl;

}
void print(string name, int age, char sex)
{
	cout << "name : " << name << ", "
		<< "age : " << age << ", "
		<< "sex : " << sex << endl;

}
void print(string name, int age, char sex, float cn)
{
	cout << "name : " << name << ", "
		<< "age : " << age << ", "
		<< "sex : " << sex << ", "
		<< "cn : " << cn << endl;

}
void print(string name, int age, float en, char sex)
{
	cout << "name : " << name << ", "
		<< "age : " << age << ", "
		<< "sex : " << sex << ", "
		<< "en : " << en << endl;

}
void test(int a)
{
	cout << "a = " << a << endl;
}
void test(char *s)
{
	cout << "s = " << s << endl;
}
int main(void)
{
	cls_t stu = {"tom", 20, 'M', 98.5};
	cls_t a[5];
	int i;
	char buf[128];

	for (i = 0; i < 5; i++)
	{
		snprintf(buf, sizeof(buf), "stu_%c%c", rand() % 26 + 'A', rand() % 26 + 'a');
		a[i].name = buf;
		a[i].age = rand() % 3 + 18;
		a[i].sex = "FM"[rand() % 2];
		a[i].cn = rand() % 30 + 70.0;
		a[i].en = rand() % 20 + 80.0;
	}
	for (i = 0; i < 5; i++)
	{
		print(a[i]);
	}
	printf("==========\n");
	for (i = 0; i < 5; i++)
	{
		print(a[i].name, a[i].age, a[i].sex, a[i].cn);
	}
	printf("==========\n");
	for (i = 0; i < 5; i++)
	{
		print(a[i].name, a[i].age, a[i].en, a[i].sex);
	}
	printf("==========\n");
    /*
	 *print(stu);
	 *print("zhang san");
	 *print(stu.name, 19);
	 *print(stu.name, 19, 'F');
     */

    /*
	 *test(10);
	 *test("tom");
     */
	return 0;
}
