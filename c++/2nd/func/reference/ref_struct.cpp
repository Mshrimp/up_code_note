#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

struct student;

struct student{
	string name;
	int age;
	void (*func1)(void);
	student & (*func2)(student & stu);
};

void hello(void)
{
	printf("hello!\n");
}

student & test(student & stu)
{
	printf("test!\n");
	return stu;
}

int main(void)
{
	student stu1 = {"tom", 18, hello, test};	

	stu1.func1();
	stu1.func2(stu1).func1();
	stu1.func2(stu1).func2(stu1).func2(stu1).func2(stu1);
	return 0;
}
