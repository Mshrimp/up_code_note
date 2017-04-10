#include <iostream>

using namespace std;
int main(void)
{
	bool a = true;

	cout.setf(ios_base::boolalpha);
	cout << "a = " << a << endl;
	return 0;
}
