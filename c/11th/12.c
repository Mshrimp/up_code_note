#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	char buf[128];
	char *p = NULL;

	fp = fopen(argv[1], argv[2]);
	if (fp == NULL)
	{
		return -1;
	}
	//向文件中写入hello
	int ret;
	ret = fputs("hello", fp);
	/*if (ret == EOF)*/
	if (ret <= 0)
	{
		perror("fputs");
		return -1;
	}
	printf("ret = %d\n", ret);

	//循环获取文件内容
    /*
	 *while(fgets(buf, sizeof(buf), fp) != NULL)
	 *{
	 *    [>puts(buf);<]
	 *    printf("%s", buf);
	 *    usleep(200000);
	 *}
     */
	 //获取一行内容
/*
 *    p = fgets(buf, sizeof(buf), fp);
 *    if (NULL == p)
 *    {
 *        fclose(fp);
 *        return -1;
 *    }
 *
 *    printf("buf = %s\n", buf);
 */

	fclose(fp);
	return 0;
}
