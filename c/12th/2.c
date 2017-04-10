#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = NULL;
	char ch;
	int ret;
	char buf[128];

	fp = fopen("./passwd", "r");
	if (fp == NULL)
	{
		return -1;
	}

	while(1)
	{
		while(fgets(buf, sizeof(buf), fp) != NULL)
		{
			printf("%s", buf);
			usleep(200000);
		}
		printf("===\n");
		rewind(fp);
	}

	/*fseek(fp, 0, SEEK_SET);*/
	rewind(fp);
	printf("=============\n");
	while(fgets(buf, sizeof(buf), fp) != NULL)
	{
		printf("%s", buf);
		usleep(200000);
	}
	/*ret = fseek(fp, 1024 * 1024 * 1024, SEEK_SET);*/
    /*
	 *ret = fseek(fp, 1024, SEEK_SET);
	 *printf("offset = %ld\n", ftell(fp));
     */
	/*ret = fseek(fp, -2, SEEK_END);*/
    /*
	 *if (ret == -1)
	 *{
	 *    printf("fseek failed!\n");
	 *    return -1;
	 *}
	 *
	 *fputc('A', fp);
     */
	/*ch = fgetc(fp);*/

	/*printf("ch = %c\n", ch);*/
		
	fclose(fp);
	return 0;
}
