#include <stdio.h>

int main(void)
{
	int count = 0;	
	while (1)
	{
		printf("hello!\n");
		count++;
		if (count == 5)
		{
			break;
		}
		/*sleep(1);*/
		usleep(100);
	}
	return 0;
}
