#include <stdio.h>

int main(void)
{
	//1970年1月1日到此刻秒数
	while (1)
	{
		printf("time = %d\n", time(NULL));
		sleep(1);
	}

	return 0;
}
