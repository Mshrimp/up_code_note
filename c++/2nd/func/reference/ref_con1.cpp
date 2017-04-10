#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

//char -> short -> int -> long -> double <- float

double refcube(const double & rt)
{
	printf("refcube : &rt = %p\n", &rt);
	cout << endl;
	return rt * rt * rt;
}

int main(void)
{
	double d = 3.0;
	long lt = 5L;

	//指向本身地址
	double *p = &d;
	double & rtemp = d;
	double arr_d[5] = {1.0,2.0,3.0,4.0,5.0};

	//const 引用会产生一个临时的引用变量
	refcube(5.0);
	refcube(d + 3.0);

	double c1 = refcube(d);
	printf("main : d = %p\n", &d);
	printf("c1 = %f\n", c1);

	double c2 = refcube(lt);
	printf("main : lt = %p\n", &lt);
	printf("c2 = %f\n", c2);
	printf("================\n");
	double c3 = refcube(*p);
	cout << "main : p = " << p << endl;
	printf("refcube = %f\n", refcube(*p));
	//cout << "main : c3 = " << c3 << endl;
	return 0;
}
