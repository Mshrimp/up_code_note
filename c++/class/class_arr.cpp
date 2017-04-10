#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

#define MAX 10

using namespace std;

//int数组 => init show max min sort find 
class array_t{
	private:
		int arr[10];//数据
		int len;//长度
		int size;//数据类型
	public:
		void init_arr();
		void show_arr();
		int max_arr();
		int min_arr();
		int ind_arr();
		void sort();
};

int main(void)
{
	array_t arr;

	return 0;
}



