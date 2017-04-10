#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

class A{
	private:
		char name[128];
		int num;
	public:
		void set_name(char _name[]);
		void set_num(int _num);
		void show(void);
		
};
int main(void)
{
	A a;
	a.set_name("tom");
	a.set_num(100);
	a.show();

	return 0;
}

void A::set_name(char _name[])
{
	printf("set name!\n");
	strcpy(this->name, _name);
}
void A::set_num(int _num)
{
	printf("set num!\n");
	this->num = _num;
}

void A::show(void)
{
	printf("name : %s num : %d\n", this->name, this->num);
}
