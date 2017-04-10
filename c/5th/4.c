#include <stdio.h>

int main(void)
{
	int i;
	char s[] = {'h', 'e', '\0', 'l', 'l', 'o'};
	char s1[] = "hello";
	char buf[10] = "helloworl";

	printf("s = %s\n", s);
	printf("s1 = %s\n", s1);

	printf("sizeof(s) = %d\n", sizeof(s));
	printf("sizeof(s1) = %d\n", sizeof(s1));
	for (i = 0; i < 10; i++)
	{
		printf("buf[%d] = %c %p\n", i, buf[i], &buf[i]);
	}
	printf("buf = %s\n", buf);

	return 0;
}
