#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

struct cls_t{
	string name;
	//char *name;
	//char name[128];
	int age;
	float cn;
};

int main(void)
{
	struct cls_t cls = {"tom", 18, 88.88};
	cls_t stu = {"jim", 20, 99.99};

	cout << "name : " << cls.name << ", age : " << cls.age
		<< ", cn : " << cls.cn << endl;

	cout << "name : " << stu.name << ", age : " << stu.age
		<< ", cn : " << stu.cn << endl;
	return 0;
}




