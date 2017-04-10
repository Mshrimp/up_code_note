#include <iostream>//标准输入输出流
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

int main(void)
{
	int a = 10;
	int *p = NULL;

	//p = (int *)malloc(sizeof(int));
	cout << "p = " << p << endl;
	cout << "&p = " << &p << endl;
	p = new int;
	if (p == NULL)
	{
		printf("malloc failed!\n");
		return -1;
	}

	*p = 12;
	cout << "p = " << p << endl;
	cout << "&p = " << &p << endl;
	
	cout << "*p = " << *p << endl;

	//free(p);
	delete p;
	delete p;

	return 0;
}
