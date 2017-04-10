#include <stdio.h>
#include <string.h>

int main(void)
{
	//point 4
	int a = 19;
	char c = 'A';
	int *p;//4
	char *ch;//1
	void *v; //空类型
	/*void d;*/

	/*ch = &a;*/
	v = &a;

	printf("*v = %d\n", *(int *)v);

	v = &c;
	printf("*v = %c\n", *(char *)v);
	printf("v = %p v + 1 = %p\n", v, v + 1);

	printf("*ch = %d\n", *ch);
	printf("p = %p p + 1 = %p\n", p, p + 1);
	printf("ch = %p ch + 1 = %p\n", ch, ch + 4);

	return 0;
}
