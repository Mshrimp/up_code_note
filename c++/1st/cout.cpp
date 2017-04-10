#include <iostream>

using namespace std;

int main(void)
{
	//输出语句
	int a;

	cout << "please input number : ";
	cin >> a;

	printf("a = %#o\n", a);
	printf("a = %#x\n", a);

	cout << "a = " << oct << a << endl;
	cout << "a = " << hex << a << endl;
	cout << "a = " << dec << a << endl;


	getchar();
	while(1)
	{
		cout << "hello" << endl;
		//cerr << "hello";
		sleep(1);
		//fflush(NULL);
	}
	return 0;
}
