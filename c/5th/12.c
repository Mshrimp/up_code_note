#include <stdio.h>
#include <string.h>

int main(void)
{
	char s2[128] = "hello";
	char s1[128] = "hello";
	/*memset(s2, 0, sizeof(s2));*/

	/*memset(s1, 0, sizeof(s1));*/
	/*memmove(s1, s2, strlen(s2) + 1);*/
	/*memcpy(s1, s2, strlen(s2) + 1);*/

	// +3 => lo
	// +2 => llo
	/*memcpy(s1 + 3, s1 + 2, strlen(s1 + 2) + 1);//helllo*/
	memmove(s1 + 3, s1 + 2, strlen(s1 + 2) + 1);//helllo

	/*bzero(s2, sizeof(s2));*/
	/*printf("s2 = %s\n", s2);*/
	printf("s1 = %s\n", s1);
	return 0;
}
