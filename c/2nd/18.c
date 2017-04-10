#include <stdio.h>

int main(void)
{
	int result;

	printf("please input class result : ");
	scanf("%d", &result);
	
    /*
	 *if (result > 100 || result < 0)
	 *{
	 *    printf("result err!\n");
	 *    return -1;
	 *}
     */

	if (result < 60 && result >= 0)
	{
		printf("较差!\n");
	}
	else if (result >= 60 && result < 70)
	{
		printf("及格!\n");
	}
	else if (result >= 70 && result < 90)
	{
		printf("良好!\n");
	}
	else if (result >= 90 && result <= 100)
	{
		printf("优秀!\n");
	}
	
	printf("============\n");

	if (result >= 90)
	{
		printf("优秀!\n");
	}
	else if (result >= 70)
	{
		printf("良好!\n");
	}
	else if (result >= 60)
	{
		printf("及格!\n");
	}
	else if (result < 60)
	{
		printf("较差!\n");
	}
	return 0;
}
