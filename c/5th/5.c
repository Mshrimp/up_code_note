#include <string.h>
#include <stdio.h>

int main(void)
{
	/*char buf[10] = {'h', 'e','l', 'l', 'o'};// 10 5*/
	/*char buf[10] = {'h', 'e','l', '\0', 'l', 'o'};//10 3*/
	/*char buf[] = {'h', 'e','l', 'l', 'o'}; // 5 ???*/
	/*char buf[] = {'h', 'e','l', '\0', 'l', 'o'}; //6 3 */
	/*char buf[] = "hel\0lo"; //7 3*/
	char buf[] = "hello\0"; //7 3

	buf = "world";

	printf("sizeof(buf) = %d\n",sizeof(buf));//10
	printf("strlen(buf) = %d\n", strlen(buf));//5
	return 0;
}
