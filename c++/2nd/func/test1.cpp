#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

void Swap(int *a, int *b)
{
	int *temp;
	printf("swap : a = %d b = %d\n", *a, *b);
	temp = a;
	a = b;
	b = temp;
    /*
	 *temp = *a;
	 **a = *b;
	 **b = temp;
     */
	printf("swap : a = %d b = %d\n", *a, *b);
}
int main(void)
{
	int a = 10, b = 20;

	printf("before : main : a = %d b = %d\n", a, b);
	Swap(&a, &b);
	printf("after  : main : a = %d b = %d\n", a, b);
	return 0;
}
