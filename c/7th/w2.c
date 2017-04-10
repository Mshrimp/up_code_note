#include <stdio.h>
#include <string.h>

int main(void)
{
	char passwd[128];
	char ch;
	int i = 0;
	system("stty -echo");
	system("stty -icanon");

	printf("please input user passwd : ");
	while(1)
	{
		ch = getchar();
		if (ch == '\n')
		{
			break;
		}
		else
		{
			if (ch == 127)
			{
				if (i == 0)
				{
					continue;
				}
				printf("\033[D");
				putchar(' ');
				printf("\033[D");
				i--;

			}
			else
			{
				putchar('*');
				passwd[i] = ch;
				i++;
			}
			fflush(NULL);
		}
	}
	passwd[i] = '\0';

	printf("passwd = %s\n", passwd);
	system("stty echo");
	system("stty icanon");
	return 0;
}
