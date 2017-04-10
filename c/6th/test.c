#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%2$*1$d\n", 10, 111);
	printf("%*d\n", 10, 222);
	return 0;
}
