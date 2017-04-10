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
	struct cls_t stu[10] = {{"tom", 20}, {"jim", 19}, {"mary", 20}};
	struct cls_t *p = NULL;

    /*
	 *p = &cls;
	 *p = stu;
     */

	p = (struct cls_t *)malloc(sizeof(struct cls_t));
	if (p == NULL)
	{
		return -1;
	}
/*
 *    p->name = (char *)malloc(128);
 *    if (NULL == p->name)
 *    {
 *        free(p);
 *        return -1;
 *    }
 *
 *    strcpy(p->name, "hello");
 */

	p->name = "hello";
	printf("p->name = %s\n", p->name);
	

	for (i = 0; i < 3; i++)
	{
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
