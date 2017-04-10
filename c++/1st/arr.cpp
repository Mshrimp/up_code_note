#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(void)
{
	int a[5] = {11,22,33,44,55};//c++11	
	//int a[5] {11,22,33,44,55};//c++11	
	int i;

	//定义数组
	//vector<int>b(5);
	array<int>b(5);

	for (i = 0; i < 5; i++)
	{
		printf("b[%d] = %d\n", i, b[i]);
	}


	for (i = 0; i < 5; i++)
	{
		b[i] = rand() % 100;
	}
	for (i = 0; i < 5; i++)
	{
		printf("b[%d] = %d : %p\n", i, b[i], &b[i]);
	}
	for (i = 0; i < 5; i++)
	{
		cout << "a[" << i << "] = " << a[i] << " : "<< &a[i]<< endl;
	}

	return 0;
}
