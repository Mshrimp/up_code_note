#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	char s[128];
	string str;

	printf("please input string : ");
	#if 0
	fgets(s, sizeof(s), stdin);// read a line
	if (s[strlen(s) - 1] == '\n')
		s[strlen(s) - 1] = '\0';
	#else
	//cin >> s;// read a word
	//cin.getline(s, sizeof(s));
	cin.get(s, sizeof(s));
	#endif
	cout << "s = " << s << endl;
	return 0;
}
