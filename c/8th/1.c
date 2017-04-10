#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char name[128] = "hello";//stack
	char *v = "hello";//指针指向常量区

	strcpy(v, "world");
	v = "world";
	v = name;//指向stack

	v[0] = 'A';
	/*name = "hello"*/
	/*strcpy(name,v);*/
	
	/*int a = 10;*/
	/*int *p, *q;*/

	/*p = &a;*/

	/**p = 20;*/

	return 0;
}
