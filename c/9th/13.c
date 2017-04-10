#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct cls_t{
	char name[128];
	int age;
}CLS;

int main(void)
{
	CLS cls = {"tom", 20};

	printf("name : %s | age : %d\n", cls.name, cls.age);
	return 0;
}
