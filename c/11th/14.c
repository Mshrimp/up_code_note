#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	char buf[10] = "hellohel";
	int ret;

	int a = 123, b;
	char s[] = "hello", s1[128];

	/*fp = fopen(argv[1], "w");*/
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		return -1;
	}

    /*
	 *ret = fprintf(fp, "%d : %s", a, s);
	 *printf("ret = %d\n", ret);
     */

	fscanf(fp, "%d : %s", &b, s1);
	printf("b = %d\n", b);
	printf("s1 = %s\n", s1);
	fclose(fp);
	return 0;
}
