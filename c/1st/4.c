#include <stdio.h>

int main(void)
{
	int a = 2, b = 3;
	int c;

	float f = 2.33;

	printf("==== %%%%\n");

	//456.234 % 23; 不能对浮点数求模

	f++;

	printf("f = %f\n", f);


	//printf("f % 2 = %d\n", f % 2);

	c = a + b;

	//c = a++;//后缀自加 先赋值再自加
	//c = ++a; //前缀自加  先自加再赋值
	c = a+++b;//执行结果跟编译器有关
	//c = a+++++b++;//c = 6 a = 3 b = 3 不允许
	a = 2;
	printf("%d: %d : %d", a++, ++a, a++);//244 442 234 232
	//452

	printf("a = %d c = %d\n", a, c);//32 22 23 

	printf("a + b = %d\n", c);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);//6
	printf("a / b = %d\n", a / b);//1 0
	printf("a % b = %d\n", a % b);//2 
	
	return 0;
}
