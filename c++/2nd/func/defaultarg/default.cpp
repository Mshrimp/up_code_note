#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

void test(int a = 123, char b = 'A', float c = 2.33)
{
	printf("test!\n");
	printf("a = %d b = %c c = %f\n", a, b, c);
}
int main(void)
{
	test(b = 'B');
	//test(3.44);
    /*
	 *test(1,2,3,4);
	 *test(1,2,3);
     */
	return 0;
}
