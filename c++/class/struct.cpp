#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

//默认公有
struct cls_t{
	char name[128];
	int age;
	float cn;
};

//默认私有
class Student{
	public:
		char name[128];
	private:
		int age;
	protected:
		float cn;
};

int main(void)
{
	cls_t cls;//结构体变量
	strcpy(cls.name, "hello");

	cout << "cls.name = " << cls.name << endl;
	Student stu;//类的一个对象
	cout << "name = " << stu.name << endl;
	strcpy(stu.name, "world");
	cout << "stu.name = " << stu.name << endl;
	//stu.age = 20;
	stu.cn = 88.88;



	return 0;
}
