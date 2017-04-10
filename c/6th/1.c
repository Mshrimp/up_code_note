#include <stdio.h>
#include <string.h>

int main(void)
{
	
	while(1)
	{
		putchar("abcdefghijklmnopqrstuvwxyz"[rand() % 26]);
		fflush(NULL);
		usleep(300000);
	}
	return 0;
}
