#include <iostream>

using namespace std;
int main(void)
{
	float f = 20.40;
	float f1 = 10.0 / 3.0;


	printf("f = %f\n", f);
	printf("f1 = %f\n", f1);

	cout.precision(2);
	cout << "f = " << f << endl;
	cout << "f = " << f1 << endl;

	cout.setf(ios_base::showpoint);//表示显示小数点
	cout.setf(ios_base::fixed, ios_base::floatfield);//指定显示格式
	cout.precision(2);//表示指定精度
	cout << "f = " << f << endl;
	cout << "f = " << f1 << endl;

	cout.unsetf(ios_base::floatfield);
	cout << "================\n";
	cout << "f = " << f << endl;
	cout << "f = " << f1 << endl;
	return 0;
}
