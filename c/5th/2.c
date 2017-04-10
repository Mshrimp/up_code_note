#include <stdio.h>

int main(void)
{
	int a[] = {1,2,3,4};

	printf("sizelen = %d\n", sizeof(a) / sizeof(a[0]));
	return 0;
}
