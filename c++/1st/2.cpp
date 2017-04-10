#include <iostream>


extern "C"
{
	void hello(void)
	{
		std::cout << "hello c++!\n";
	}
}
