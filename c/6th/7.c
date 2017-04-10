#include <stdio.h>
#include <string.h>

int main(void)
{
	char buf[8] = {};

	int ret;

	system("stty -echo");
	system("stty -icanon");
	while(1)
	{
		ret = read(0, buf, 8);
		if (ret == 1 && buf[0] == 27)
		{
			break;
		}
		else if (ret == -1)
		{
			printf("read failed!\n");
			return -1;
		}
		else if (ret == 1)
		{
			printf("%d |", buf[0]);
		}
		else if (ret == 3)
		{
			printf("%d %d %d |", buf[0], buf[1], buf[2]);
		}
		fflush(NULL);
		/*printf("ret = %d\n", ret);*/
	}
	system("stty echo");
	system("stty icanon");
	return 0;
}
