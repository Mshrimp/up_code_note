#include <stdio.h>
#include <string.h>

int main(void)
{
	//定义指针
	int a = 10;
	int b = 20;
	char ch = 'A';
	int *p = &a;//变量 ： p *p
	/*a = 20;*/
	/**p = 30;*/
	p = &b;
	*p = 30;


	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, b);
	printf("&p = %p p = %p, *p = %d\n", &p, p, *p);


	return 0;
}
