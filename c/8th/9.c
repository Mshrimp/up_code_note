#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i;

	char name[10][10] = {"tom", "jim", "mary"};
	char (*s)[10];
	char *p[10] = {"tom", "jim", "mary"};


	s = name;

	for (i = 0; i < 3; i++)
	{
		printf("%s ", s[i]);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s ", p[i]);
	}
	printf("\n");

	return 0;
}
