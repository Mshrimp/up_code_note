#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test(char *s)
{
	while(*s != '\0')
	{
		printf("%c", *s);
		s++;
	}
	printf("\n");
}
int main(void)
{
	test("hello");
	return 0;
}
