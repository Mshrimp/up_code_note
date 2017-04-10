#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	char ch;

	
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("fopen failed!\n");
		return -1;
	}

	printf("fopen success!\n");

	int ret;
	ret = fputc('A', fp);
	printf("ret = %c\n", ret);
	ret = fputc('B', fp);

    /*
	 *system("clear");
	 *while((ch = fgetc(fp)) != EOF)
	 *{
	 *    printf("\033[%dm%c\033[0m", rand() % 7 + 31, ch);
	 *    fflush(NULL);
	 *    usleep(50000);
	 *}
     */
    /*
	 *ch = fgetc(fp);
	 *printf("ch = %c\n", ch);
     */
	return 0;
}
