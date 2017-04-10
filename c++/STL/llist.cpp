#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main(void)
{
	int i;
	list<int>one;//容器
	list<int>two(5, 2);//表示5个数据元素，每一个都是2
	int temp[5] = {1, 2, 6, 8, 4};
	list<int>three(two);
	three.insert(three.begin(), temp, temp + 5);
	int more[6] = {6,4,4,4,5,4};
	three.insert(three.begin(), more, more + 6);
	list<int>four;
	four.insert(four.begin(), more, more + 6);
	//把数据拷贝过来
	list<int>::iterator t1;

	four.splice(four.begin(), two);

	//把两个链表连接成一个链表
	four.remove(2);//删除所有2数据
	//three.unique();
	three.sort();
	three.unique();
	
	for(i = 0; i < 10; i++)
	{
		one.push_back(rand() % 100);
	}

	cout << "one : ";
	for (t1 = one.begin(); t1 != one.end(); t1++)
	{
		cout << *t1 << " ";
	}
	cout << endl;

	cout << "two : ";
	for (t1 = two.begin(); t1 != two.end(); t1++)
	{
		cout << *t1 << " ";
	}
	cout << endl;
	cout << "three : ";
	for (t1 = three.begin(); t1 != three.end(); t1++)
	{
		cout << *t1 << " ";
	}
	cout << endl;
	cout << "four : ";
	for (t1 = four.begin(); t1 != four.end(); t1++)
	{
		cout << *t1 << " ";
	}
	cout << endl;
	return 0;
}
