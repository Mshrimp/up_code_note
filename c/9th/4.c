#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//数组指针：
//指针数组：
int main(void)
{
	int *v = NULL;
	int i;
	int a[5];

	v = &i;
	v = a;

	char name[10][10] = {"xiaoming", "xiaozhang", "xiaoli"};
	char *p[10] = {"tom", "jim", "mary"};//40 指针数组
	//zhang san | li  si | wang ma zi
	char (*s)[10] = NULL;//4 数组指针

	printf("sozeof(p) = %d\n", sizeof(p));
	printf("sizeof(s) = %d\n", sizeof(s));

	s = name;

	/*s[0] = "hello";//?*/
	/*p[0] = "hello";*/
	strcpy(s[0], "hello");
	strcpy(p[0], "hello");// ?



	printf("sizeof(s[0]) = %d\n", sizeof(s[0]));

	for (i = 0; i < 3; i++)
	{
		printf("%s ", p[i]);
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("%s ", s[i]);
	}
	printf("\n");
	return 0;
}
