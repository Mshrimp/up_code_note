#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

int main(void)
{
	//int doubel string
	int i;
	int arr[10] = {1,2,3,4,5,6,7,8,9};
	vector<int>a1;//类模板 容器
	vector<int>::iterator t1;//迭代器

    /*
	 *for (i = 0; i < 10; i++)
	 *{
	 *    a1[i] = rand() % 100;
	 *}
     */
	for (i = 0; i < 10; i++)
	{
		a1.push_back(rand() % 100);
	}

	a1.erase(a1.begin(), a1.begin() + 2);

	for (t1 = a1.begin(); t1 != a1.end(); t1++)
	{
		cout << *t1 << " ";
	}
	cout << endl;

	sort(a1.begin(), a1.end());
	for(t1 = a1.begin(); t1 != a1.end(); t1++)
	{
		cout << *t1 << " ";
	}

	cout << endl;

	for (i = 0; i< 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
    /*
	 *for (i = 0; i< 10; i++)
	 *{
	 *    cout << a1[i] << " ";
	 *}
	 *cout << endl;
     */
	return 0;
}
