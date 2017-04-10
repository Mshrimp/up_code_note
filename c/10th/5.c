#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//指定对其方式
#pragma pack(1)
struct a_t{
	int p;
	char ch;
};
#pragma pack(0)

struct b_t{
	int p;
	char ch;
};
int main(void)
{
	printf("sizeof(struct a_t) = %d\n", sizeof(struct a_t));	
	printf("sizeof(struct b_t) = %d\n", sizeof(struct b_t));	
	return 0;
}
