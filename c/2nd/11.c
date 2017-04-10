#include <stdio.h>

int main(void)
{
	int qq = 317297515;

	printf("please input qq : ");
	scanf("%d", &qq);
	if (qq == 317297515)
	{
		printf("success!\n");
		return -1;
	}

	printf("failed!\n");
	return 0;
}
