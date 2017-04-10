/*
	5.3-C-2
	结构体指针、结构体指针变量的使用
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cls_t{
	/*char name[128];*/
	char *name;
	int age;
};

int main(void)
{
	int i;
	struct cls_t cls = {"tom", 20};
	struct cls_t stu[10] = {{"tom", 20}, {"jim", 19}, {"mary", 20}};	//结构体数组初始化
	struct cls_t *p = NULL;	//定义指向结构体的结构体指针变量

    /*
	 *p = &cls;		//结构体指针指向结构体的地址
	 *p = stu;		//结构体数组名是地址，是数组第一个结构体的地址
     */

	p = (struct cls_t *)malloc(sizeof(struct cls_t));	//使用动态分配内存给结构体指针变量p分配内存空间
	if (p == NULL)	//检测动态内存分配空间是否成功，不成功则结束程序
	{
		return -1;
	}

	//定义结构体变量时，成员指针变量*name动态分配内存空间
/*
 *    p->name = (char *)malloc(128);	
 *    if (NULL == p->name)	//并检测分配空间是否成功
 *    {
 *        free(p);		//动态分配空间不成功，释放结构体指针变量p的内存空间，再结束程序
 *        return -1;
 *    }
 *
 *    strcpy(p->name, "hello");	//将字符串复制到指针指向的内存空间
 *								//注：name为指针时，可以直接赋值，name为数组时不能直接赋值
 */

	p->name = "hello";
	printf("p->name = %s\n", p->name);
	

	for (i = 0; i < 3; i++)
	{
		//结构体指针变量间接引用有三种方法，(*(p + i)).name	 p[i].name  (p + i)->name
		//注:结构体中指针变量成员需要使用->，->左边需要一个地址
		/*printf("name = %s age = %d\n", (*(p+i)).name, (*(p + i)).age);*/
		/*printf("name = %s age = %d\n", p[i].name, p[i].age);*/
		printf("name = %s age = %d\n", (p + i)->name, (p + i)->age);
	}
	/*p = cls.name;*/

/*
 *    printf("p = %p &cls = %p\n", p, &cls);
 *
 *    strcpy(p->name,"jim");
 *
 *    printf("name = %s\n", cls.name);
 *    printf("name = %s\n", (*p).name);
 *    printf("name = %s\n", p->name);
 *    printf("age = %d\n", p->age);
 */

	/*printf("name = %s\n", *p.name);*/
	return 0;
	
}
