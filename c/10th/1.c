#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void like(char *name)
{
	printf("%s", name);
}
struct cls_t{
	/*char name[128];*/
	char *name;
	int age;
	char sex;
	float cn;
	void (*love)(char *);
};

int main(void)
{
	int i;
	char *tmp[10] = {"lili", "mary", "范冰冰", "小燕子", "白蛇", "美女"};
	struct cls_t cls = {"tom", 18, 'M', 99.5, NULL};
	struct cls_t stu[10] = {{"jim", 18, 'M', 88.8, NULL},
							{"mary", 19, 'F', 99.9, NULL},
							{"join", 19, 'M', 66.7, NULL}};

	for (i = 0; i< 10; i++)
	{
		stu[i].name = (char *)malloc(128);
		if (stu[i].name == NULL)
		{
			while(i--)
				free(stu[i].name);
			return -1;
		}
		snprintf(stu[i].name, 128, "stu_%c%c", rand() % 26 + 'A', rand() % 26 + 'a');
        /*
		 *printf("please input %d name : ", i + 1);
		 *scanf("%s", stu[i].name);
         */
		stu[i].age = rand() % 3 + 18;
		stu[i].sex = "MF"[rand() % 2];
		stu[i].cn = rand() % 30 + 70;
		stu[i].love = like;
	}
	for (i = 0; i < 10; i++)
	{
	/*stu[i].love = like;*/

	printf("%d : name : %5s age : %3d sex : %c cn : %.2f love : ", i, stu[i].name, stu[i].age, stu[i].sex, stu[i].cn);
	stu[i].love(tmp[rand() % 6]);
	free(stu[i].name);
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
