#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(void)
{
	double number = 123;
	int i;
	
	cout << setw(6) << "N" << setw(15) << "square num" << setw(15) << "fourth num" << endl;

	cout << sqrt(number)<< endl;	
	for (i = 10; i <= 100; i += 10)
	{
		number = sqrt(i);
		cout << setw(6) << setfill('.') << i 
			<< " " << setw(14) << setprecision(4) << number 
			<< " " << setw(14) << setprecision(3) << sqrt(number) << endl;;
	}
	return 0;
}
