#include <stdio.h>

int main(void)
{
	int i =1;

	while (i < 10)
	{
		i++;
		if (i == 5)
		{
			/*break;*/
			continue;
		}
		printf("%d ", i);
		fflush(NULL);
	}
	printf("\n");
	return 0;
}
