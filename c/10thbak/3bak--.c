/*
	5.3-C-10th-3
	在函数中初始化结构体，返回整个结构体和返回结构体的地址
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cls_t{
	char name[128];
	int age;
};

//结构体作为函数行参时，只是传递了结构体的值的拷贝，而不是地址，修改不会影响结构体本身，结构体指针作为行参，向函数传递了结构体的指针，在函数中修改结构体，会影响到结构体本身。
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

	return cls;		//在函数中初始化结构体，并返回整个结构体
}
struct cls_t test1(void)
{
	struct cls_t cls = {"kiss", 20};

	return cls;		//在函数中初始化结构体，并返回整个结构体
}
struct cls_t *test2(void)
{
	struct cls_t cls = {"love", 20};

	return &cls;	//在函数中初始化结构体，并返回结构体的地址,返回栈中的地址是不合法的
}
int main(void)
{
	struct cls_t cls;// = {"tom", 20};
	struct cls_t *p = NULL;	//定义结构体指针，用于指向结构体

	printf("main &cls = %p\n", &cls);
	printf("stat : name : %s age : %d\n", cls.name, cls.age);
	init(&cls, cls.name);	//通过向函数传递指针的方法在函数中进行结构体初始化
	printf("end : name : %s age : %d\n", cls.name, cls.age);

	cls = test();	//用类型为结构体的变量接收返回整个结构体的初始化函数
	printf("main -> test : name : %s age : %d\n", cls.name, cls.age);
	cls = test1();
	printf("main -> test : name : %s age : %d\n", cls.name, cls.age);
	p = test2();	//使用指向结构体的指针接收返回结构体地址的初始化函数
	test1();  //????????????????
	printf("p -> test : name : %s age : %d\n", p->name, p->age);

	return 0;
}
