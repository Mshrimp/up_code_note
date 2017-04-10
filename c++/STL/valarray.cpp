#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>
#include <valarray>

using namespace std;

int main(void)
{
	int i;
	int a[5] = {12, 34, 56, 78, 90};

	valarray<int>v1;
	valarray<int>v2(10);
	valarray<int>v3(a, 5);

	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		v2[i] = rand() % 100;
	}

	for (i = 0; i < 10; i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	cout << "sum = " << v2.sum() << endl;
	cout << "size = " << v2.size() << endl;
	cout << "max = " << v2.max() << endl;
	cout << "min = " << v2.min() << endl;
	return 0;
}
