#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma pack

struct a_t{
	char ch : 4;
	char c;
	short s;
	int i;
};

int main(void)
{
	struct a_t a;

	//&a.ch | &a.s
	printf("sizeof(a) = %d\n", sizeof(a));
	/*printf("&a.ch = %p &a.s = %p\n", &a.ch, &a.s);*/
	return 0;
}
