#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	char buf[1024];
	int ret = 1;

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		return -1;
	}

    /*
	 *ret = fwrite("hello", 5, 1, fp);
	 *printf("ret = %d\n", ret);
     */
	memset(buf, 0, sizeof(buf));
	/*ret = fread(buf, sizeof(char), sizeof(buf), fp);*/	//按字节读取，读取sizeof(buf)次，最后出现乱码
	while (ret != 0)
	{
		ret = fread(buf, sizeof(char), 1, fp);	//按字节读取，读取sizeof(buf)-1次，最后不会出现乱码
		/*ret = fread(buf, sizeof(char), sizeof(buf) - 1, fp);	//按字节读取，读取sizeof(buf)-1次，最后不会出现乱码*/
		/*ret = fread(buf, sizeof(buf), 1, fp);	//按1024字节读取，一次*/
		printf("%d  %s  %d\n", ret, buf, *buf);
	}
	printf("ret = %d\n", ret);
	printf("buf = %s\n", buf);
	printf("buf[sizeof(buf)-4] = %c\n", buf[sizeof(buf)-4]);
	printf("buf[sizeof(buf)-3] = %d\n", buf[sizeof(buf)-3]);
	printf("buf[sizeof(buf)-2] = %d\n", buf[sizeof(buf)-2]);
	printf("buf[sizeof(buf)-1] = %d\n", buf[sizeof(buf)-1]);
	fclose(fp);
	return 0;
}
