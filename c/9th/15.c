#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 *struct cls_t{
 *    char name[128];
 *    int age;
 *}CLS, cls = {"tom", 123};
 */

struct {
	char name[128];
	int age;
}cls = {"tom", 123};


int main(void)
{
/*
 *    cls stu = {"jim", 20};
 *
 *    printf("name : %s\n", stu.name);
 */

	int a;

	typeof(a) b;
	b = 20;

	printf("b = %d\n", b);

	typeof(cls) stu = {"mary", 123};

	printf("name : %s\n", cls.name);
	printf("name : %s\n", stu.name);
	return 0;
}
