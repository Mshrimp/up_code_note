#include <stdio.h>

int main(void)
{
	int qq, passwd;

	printf("please input qq : ");
	scanf("%d", &qq);

	if (qq == 317297515)
	{
		printf("please input qq passwd : ");
		scanf("%d", &passwd);
		if (passwd == 123456)
		{
			printf("login success!\n");
		}
		else
		{
			printf("user passwd failed!\n");
		}
	}
	else
	{
		printf("username failed!\n");
	}
	return 0;
}
