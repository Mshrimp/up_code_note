#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 36; i++)
	{
		if (i % 9 == 8)
		{
			printf("\n");
		}
		else if (i % 9 <= 3)
		{
			putchar('#');
		}
		else
		{
			putchar('*');
		}
	}
	return 0;
}
