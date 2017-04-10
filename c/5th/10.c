#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("strchr(hello, l) = %s\n", strchr("hello", 'L'));
	printf("strrchr(helhlolo, l) = %s\n", strrchr("hello", 'l'));

	printf("strstr(hello, llo) = %s\n", strstr("hello", "Llo"));
	printf("strcasestr(hello, llo) = %s\n", strcasestr("hello", "Llo"));
	return 0;
}
