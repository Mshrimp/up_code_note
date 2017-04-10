#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;


class Hero
{
	public:
	//虚函数
		virtual void show(void)
		{
			cout << "hero!\n" << endl;
		}
};

class A : public Hero{
	public:
		void show(void)
		{
			cout << "AAAA!\n" << endl;
		}
};

class B : public Hero{
	public:
		void show(void)
		{
			cout << "BBBB!\n" << endl;
		}
};

class C : public Hero{
	public:
		void show(void)
		{
			cout << "CCCC!\n" << endl;
		}
};

void print_class(Hero * p);

int main(void)
{
	Hero h;

	A aa;
	print_class(&aa);
	//aa.show();
	B bb;
	print_class(&bb);
	//bb.show();
	C cc;
	print_class(&cc);
	//cc.show();
	return 0;
}

void print_class(Hero * p)
{
	p->show();
}
