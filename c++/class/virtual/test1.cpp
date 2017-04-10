#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

//虚函数 多态继承

//纯虚函数 为了实现类抽象
//规定对象的行为方法，并不需要实现

class Hero
{
	public:
		void tt(void);
		virtual void show(void) = 0;//纯虚函数
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
	Hero *h;

    /*
	 *A aa;
	 *aa.show();
     */

	A aa;
	print_class(&aa);
	aa.tt();
	B bb;
	print_class(&bb);

	Hero & hh = aa;
	hh.show();
	return 0;
}

void print_class(Hero * p)
{
	p->show();
}

void Hero::tt(void)
{
	cout << "tttttt!\n";
}
