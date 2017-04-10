#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	char buf[10] = "asdfghjk";
	int ret;

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		return -1;
	}

    /*
	 *ret = fwrite("hello", 5, 1, fp);
	 *printf("ret = %d\n", ret);
     */
	/*memset(buf, 0, sizeof(buf));*/
	ret = fread(buf, sizeof(char), sizeof(buf), fp);
	/*ret = fread(buf, sizeof(buf), 1, fp);*/
	printf("ret = %d\n", ret);
	printf("buf = %s\n", buf);
	fclose(fp);
	return 0;
}
