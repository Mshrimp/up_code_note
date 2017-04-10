#include <stdio.h>

int main(void)
{
	int option;

	system("clear");//清屏
	printf("===清华大学ERP(V1.0)===\n");
	printf("===1 add sudent info===\n");
	printf("===2 del sudent info===\n");
	printf("===3 ind sudent info===\n");
	printf("===4 chg sudent info===\n");
	printf("===5 ext sudent info===\n");
	printf("please input option : ");
	scanf("%d", &option);

	if (option == 1)
	{
		printf("add class!\n");
	}
	else if (option == 2)
	{
		printf("del class!\n");
	}
	else if (option == 3)
	{
		printf("ind class!\n");
	}
	else if (option == 4)
	{
		printf("chg class!\n");
	}
	else if (option == 5)
	{
		printf("exit class!\n");
		return -1;
	}
	else
	{
		printf("option err!\n");
	}

	return 0;
}
