#include <stdio.h>

int main(void)
{
	char ch;//1
	int i;
	char s[5] = {'h', 'e', 'l', 'l', 'o'};
	/*char s[5] = "hello";*/
	char buf[] = "world";
	/*char s[5];// = {'h', 'e', 'l', 'l', 'o'};*/

	printf("sizeof(s) = %d\n", sizeof(s));
	printf("sizeof(buf) = %d\n", sizeof(buf));

	/*s[0] = 'A';*/
	for (i = 0; i < 5; i++)
	{
		printf("s[%d] = %c %p\n", i, s[i], &s[i]);
	}
	/*printf("\n");*/

	printf("s = %s\n", s);
	return 0;
}
