#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cls_t{
	int age;
	char sex;
	double cn;
};

union stu_t{
	int age;
	char sex;
	double cn;
};

int main(void)
{
	union stu_t stu;

	stu.age = 18;
	stu.cn = 99.99;

	printf("stu.age = %d\n", (int)stu.age);

	printf("sizeof(struct cls_t) = %d\n", sizeof(struct cls_t));
	printf("sizeof(union stu_t) = %d\n", sizeof(union stu_t));

	return 0;
}
