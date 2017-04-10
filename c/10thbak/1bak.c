/*
	5.3-C-结构体
	结构体数组使用、结构体成员指针变量、函数指针变量的使用
	结构体数组、指针变量、指针数组变量随机初始化
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void like(char *name)
{
	printf("%s", name);
}
struct cls_t{
	/*char name[128];*/
	char *name;	//定义字符型指针变量，未分配存储空间，需要分配空间后使用
	int age;
	char sex;
	float cn;
	void (*love)(char *);	//函数指针，用来指向类型相同的函数
};

int main(void)
{
	int i;
	char *tmp[10] = {"lili", "mary", "范冰冰", "小燕子", "白蛇", "美女"}; //用指针数组初始化
	struct cls_t cls = {"tom", 18, 'M', 99.5, NULL};	//结构体初始化
	//结构体数组初始化
	struct cls_t stu[10] = {{"jim", 18, 'M', 88.8, NULL},
							{"mary", 19, 'F', 99.9, NULL},
							{"join", 19, 'M', 66.7, NULL}};


	for (i = 0; i< 10; i++)
	{
		stu[i].name = (char *)malloc(128);	//为结构体数组每个成员中的指针变量*name动态分配内存空间
		if (stu[i].name == NULL)	//内存分配检测，分配成功指向分配的空间，分配失败返回NULL指针
		{
			while(i--)
				free(stu[i].name);	//结构体数组中的指针变量name分配失败，释放所有已经分配的内存空间，并退出程序
			return -1;
		}
		snprintf(stu[i].name, 128, "stu_%c%c", rand() % 26 + 'A', rand() % 26 + 'a');	//为结构体成员name随即分配姓名
        /*
		 *printf("please input %d name : ", i + 1);
		 *scanf("%s", stu[i].name);
         */
		//结构体成员变量随即初始化
		stu[i].age = rand() % 3 + 18;
		stu[i].sex = "MF"[rand() % 2];
		stu[i].cn = rand() % 30 + 70;
		stu[i].love = like;		//结构体函数指针变量初始化为指向函数
	}
	for (i = 0; i < 10; i++)
	{
	/*stu[i].love = like;*/
	//使用循环逐个打印结构体数组各个成员的各个变量
	printf("%d : name : %5s age : %3d sex : %c cn : %.2f love : ", i, stu[i].name, stu[i].age, stu[i].sex, stu[i].cn);
	stu[i].love(tmp[rand() % 6]);
	free(stu[i].name);	//程序结束前，需要使用循环逐个释放结构体数组中各name变量申请的内存空间
	/*stu[i].love("lili");*/
	printf("\n");
		
	}
	printf("============\n");
	cls.love = like;

	printf("name : %s age : %d sex : %c cn : %.2f love : ", cls.name, cls.age, cls.sex, cls.cn);
	cls.love("lili");
	printf("\n");
	return 0;
}
