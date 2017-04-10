#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

class A{
	public:
		int *p;
		int test(void){printf("test!\n");}
		void hello(void){printf("hello!\n");}
		void world(void){printf("world!\n");}
};

void test(void)
{
	printf("test!\n");
}
int main(void)
{
	A a;


	//定义函数指针
	int (A::*temp)(void) = &A::test;
	void (A::*func)(void) = &A::hello; 
	func = &A::world;

	func = &test;
	//int temp = 10;

	(a.*temp)();

	(a.*func)();
	//a.p = &temp;

    /*
	 *cout << "&temp = " << &temp << endl;
	 *cout << "a.*p = " << a.p << endl;
	 *cout << "a.*p = " << *(a.p) << endl;
	 *cout << "a.*p = " << a.*p << endl;
     */

	return 0;
}
