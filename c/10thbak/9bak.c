#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//宏定义为常量，不区分数据类型
//注：宏定义是简单的替换，执行效率高，代码少于5行的函数可以使用宏定义提高效率
#define PI 3.14
#define R 2
#define S PI * R * R
#define AREA(r) PI * r * r
#define ADD(a, b) a + b
#define MUL(a, b) ((a) * (b))  //注：宏定义中使用函数或者是运算，要在变量和整个函数外边加括号
	//在宏定义中有多行代码时，可以使用续行符'\'连接多行，可以使用do{}while(0)将多行代码放在一起使用
/*
 *#define MAX(a, b) 	do{									\
 *                        if (a > b)						\
 *                        {								\
 *                            printf("max = %d\n", a);	\
 *                        }								\
 *                        else							\
 *                        {								\
 *                            printf("max = %d\n", b);	\
 *                        }								\
 *                    }while(0)		
 *
 */
//多行代码也可以放在一行书写，但是可读性差
#define MAX(a, b) 	do{if (a > b){printf("max = %d\n", a);}else{printf("max = %d\n", b);}}while(0)	

#define MAX1(a, b) (((a) > (b)) ? (a) : (b))

float area(int r)
{
	return PI * r * r;
}

int main(void)
{
	const float a = 3.14;
	/*PI = 4.14;*/
	int r = 2;

	int num1, num2;
	printf("please input num1 and num2 : ");
	scanf("%d%d", &num1, &num2);
	int max;

	MAX(num1, num2);
	max = MAX1(num1, num2);
	printf("max = %d\n", max);

	//宏定义函数的调用
	printf("ADD = %d\n", ADD(6, 3));
	printf("MUL = %d\n", MUL(4 + 2, 3));
	printf("area(r)  = %.2f\n", area(r));
	printf("AREA(r)  = %.2f\n", AREA(r));

	printf("s = %.2f\n", PI * r * r);
	printf("s = %.2f\n", S);
	printf("PI = %.2f\n", PI);
	printf("a = %.2f\n", a);
	return 0;
}
