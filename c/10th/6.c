#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//位宽
struct cls_t{
	unsigned int a : 8;
	/*int b : ;*/
	/*char name[10];*/
};

int main(void)
{
	
	struct cls_t a;

	a.a = 255 + 1;
	printf("a.a = %d\n", a.a);
	printf("sizeof(struct cls_t) = %d\n", sizeof(struct cls_t));

	return 0;
}


