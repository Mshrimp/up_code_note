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
		void hello(void)
		{
			cout << "hello A!\n";
		}
};
class B{
	public:
		void hello(void)
		{
			cout << "hello B!\n";
		}
};

class C : public A, private B{
	
	public:
		void hello(void)
		{
			this->B::hello();	
			cout << "hello C!\n";
		}
};
int main(void)
{
	C cc;
	cc.hello();
	cc.A::hello();
	//cc.B::hello();
	return 0;
}
