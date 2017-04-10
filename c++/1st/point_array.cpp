#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

int main(void)
{
	int i;
	int *arr = NULL;

	//申请空间
	arr = new int [10];

	arr[0] = 123;
	
	cout << "sizeof(arr) = " << sizeof(arr) << endl;
	cout << "sizeof(arr) = " << sizeof(&arr) << endl;

	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << "arr[0] = " << arr[0] << endl;
	for (i = 0; i < 10; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << " : " << arr + i << endl;
	}
	//释放空间
	delete [] arr;
	//delete (arr + 1);

	return 0;
}
