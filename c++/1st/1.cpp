#include <iostream>

using namespace std;



extern "C"{
	extern void hello(void);
}

int main(void)
{
	cout << "this is c++ program!\n";
	hello();
	return 0;
}
