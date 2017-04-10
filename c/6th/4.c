#include <stdio.h>
#include <string.h>

int main(void)
{
	char buf[128];
	/*system("clear");*/
	printf("\033[2J");
	printf("\033[?25l");
	printf("\033[10;10H");
	printf("\033[31mh\033[32me\033[33ml\033[34mlo!\033[0m\n");
	printf("   \033[D\033[31mh\033[32me\033[33ml\033[34mlo!\033[0m\n");
	getchar();

	printf("\033[?25h");
	
/*
 *    while(1)
 *    {
 *        printf("\033[5;5Hplease input string : \033[s\033[K");
 *        scanf("%s", buf);
 *
 *        printf("\033[3;10HSHOW : \033[K%s\033[u\n", buf);
 *    }
 */
	return 0;
}
