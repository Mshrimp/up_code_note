#include <stdio.h>

int main(void)
{
	char ch;

	printf("please input char : ");
	ch = getchar();

	printf("old : ch = %c\n", ch);

	ch = (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')?((ch >= 'a')?(ch - ('a' - 'A')):(ch + ('a' - 'A'))):(ch);

	printf("new : ch = %c\n", ch);
	return 0;
}
