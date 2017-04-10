#include <stdio.h>
#include <string.h>

int main(void)
{
	char buf[8] = {};

	int ret;

	system("clear");
	system("stty -echo");
	system("stty -icanon");
	while(1)
	{
		ret = read(0, buf, 8);
		if (buf[0] == 119)
		{
			printf("\033[A");
		}
		else if (buf[0] == 115)
		{
			printf("\033[B");
		}
		else if (buf[0] == 97)
		{
			printf("\033[D");
		}
		else if (buf[0] == 100)
		{
			printf("\033[C");
		}
		else if (buf[0] == 27)
		{
			break;
		}
		else
		{
			putchar(buf[0]);
		}
		fflush(NULL);
		/*printf("ret = %d\n", ret);*/
	}
	system("stty echo");
	system("stty icanon");
	return 0;
}
