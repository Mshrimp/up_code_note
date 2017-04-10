#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

class A
{
	private:
		string name;
		int age;
		static int num;
	public:
		A(string _name, int _age){name = _name, age = _age;}
		//static void show(void);
		void show(void);
		static int ret_num(void){return num;}
		void show_num(void){cout << "num = " << num << endl;}
};
int A::num = 0;

int main(void)
{
	int ret; 
	A a("tom", 20);
	A b("jim", 20);

	a.show();
	b.show();

	//cout << "num = " << a.num << endl;
	//a.show_num();
	//ret = a.ret_num();
	ret = A::ret_num();
	cout << "ret = " << ret << endl;
	cout << "num = " << a.ret_num() << endl;
	cout << "num = " << b.ret_num() << endl;
	return 0;
}

void A::show(void)
{
	name = "jim";
	age = 21;
	num++;
	cout << "name : " << name << " , age : " << age << endl;
}
