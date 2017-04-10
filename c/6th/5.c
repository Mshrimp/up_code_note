#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("hello!\n");
	printf("\033[1mhello!\033[0m\n");
	printf("\033[4mhello!\033[0m\n");
	printf("\033[31;42mhello!\033[0m\n");
    /*
	 *printf("ESC[2Ihello![0I\n");
	 *printf("\033[3Ihello!\033[0I\n");
     */
	return 0;
}
