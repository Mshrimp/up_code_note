#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char s[128] = "hello";
	char *p = "hello";

	/*strcpy(s, "world");*/
	strcpy(p, "world");
	/*p = "world";*/

	s[0] = 'A';

	/*p[0] = 'A';*/

	printf("s = %s\n", s);
	printf("p = %s\n", p);

	for (i = 0; i < 5; i++)
	{
		printf("%c", s[i]);
		printf("%c", p[i]);
	}
	printf("\n");
	return 0;
}
