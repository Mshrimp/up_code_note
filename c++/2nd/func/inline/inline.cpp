#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

void test(void);

inline void hello(void)
{
	printf("hello!\n");
}

static void world(void)
{
	printf("world!\n");
}
int main(void)
{
	//hello();
	test();
	return 0;
}
