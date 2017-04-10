#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//定义结构体
struct cls_t{
	char name[128];
	int id;
	int age;
	char sex;
	float cn;
	float en;
};

struct stu_t{
	char name[128];
	int id;
	int age;
	char sex;
	float cn;
	float en;
};
int main(void)
{
	
	struct cls_t cls = {"tom", 100001, 18, 'M', 99.8, 88.5};
	struct stu_t stu;
	//访问结构体成员.

	cls = {"tom", 100001, 18, 'M', 99.8, 88.5};//不可以整体赋值
	
	strcpy(cls.name,"jim");

	cls.cn = 100;
	printf("cls.name = %s\n", cls.name);
	printf("cls.id = %d\n", cls.id);
	printf("cls.age = %d\n", cls.age);
	printf("cls.sex = %c\n", cls.sex);
	printf("cls.cn = %.2f\n", cls.cn);
	printf("cls.en = %.2f\n", cls.en);

	/*stu = cls;*/
	memcpy(&stu, &cls, sizeof(cls));

	printf("============\n");
	printf("stu.name = %s\n", stu.name);
	printf("stu.id = %d\n", stu.id);
	printf("stu.age = %d\n", stu.age);
	printf("stu.sex = %c\n", stu.sex);
	printf("stu.cn = %.2f\n", stu.cn);
	printf("stu.en = %.2f\n", stu.en);
	return 0;
}





