#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.14
#define R 2
#define S PI * R * R
#define AREA(r) PI * r * r
#define ADD(a, b) a + b
#define MUL(a, b) ((a) * (b))
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
