#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cls_t{
	char name[128];
	int age;
};

void init(struct cls_t *cls, char *name)
{
	printf("init : cls = %p\n", cls);
	strcpy(cls->name, "tom");
	/*strcpy(name, "jim");*/
	cls->age = 18;
	printf("init : name : %s age : %d\n", cls->name, cls->age);
}

struct cls_t test(void)
{
	struct cls_t cls = {"ken", 19};

	return cls;
}
struct cls_t test1(void)
{
	struct cls_t cls = {"kiss", 20};

	return cls;
}
struct cls_t *test2(void)
{
	struct cls_t cls = {"love", 20};

	return &cls;
}
int main(void)
{
	struct cls_t cls;// = {"tom", 20};
	struct cls_t *p = NULL;

	printf("main &cls = %p\n", &cls);
	printf("stat : name : %s age : %d\n", cls.name, cls.age);
	init(&cls, cls.name);
	printf("end : name : %s age : %d\n", cls.name, cls.age);

	cls = test();
	test1();
	printf("main -> test : name : %s age : %d\n", cls.name, cls.age);
	p = test2();
	test1();
	printf("p -> test : name : %s age : %d\n", p->name, p->age);

	return 0;
}
