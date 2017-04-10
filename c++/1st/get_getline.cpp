#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

int main(void)
{
	char buf[128] = "sldfhakhfdjdhfjafjafhjsdafghadfgsadfsg";
	char ch;
	printf("please input string : ");
	//cin.getline(buf, 128);
	cin.get(buf, 128).get();

	printf("buf = %s\n", buf);

	printf("please input char : ");
	cin.get(ch);

	printf("ch = %c\n", ch);
	return 0;
}
