
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

	switch (option)
	{
		default:
			printf("case err!\n");
			break;
		case 2:
			printf("case del!\n");
			/*break;*/
		case 3:
			printf("case ind!\n");
			/*break;*/
		case 4:
			printf("case chg!\n");
			break;
		case 1:
			printf("case add!\n");
			break;
		case 5:
			printf("case exit!\n");
			break;

	}
	return 0;
}
