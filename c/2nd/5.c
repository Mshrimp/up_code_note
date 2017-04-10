#include <stdio.h>

//能被400整除 || 能被4整除 && 不可以被100整除
//year % 400 == 0 || year % 4 == 0 && year % 100 != 0 
int main(void)
{
	int num1, num2, year;
	int max;

	printf("please input year : ");
	scanf("%d", &year);

	(year % 400 == 0 || year % 4 == 0 && year % 100 != 0) ? printf("yes!\n") : printf("no!\n");

	printf("please input two numbers : ");
	scanf("%d%d", &num1, &num2);

	max = num1 > num2 ? num1 : num2;

	;//空语句
	/*printf("num1 = %d num2 = %d\n", num1, num2);*/
	printf("max = %d\n", max);
	return 0;
}
