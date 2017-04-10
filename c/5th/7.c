#include <stdio.h>
#include <string.h>

int main(void)
{
	char buf[10] = {};
	char *p = NULL;

	printf("buf  = %s\n", buf);
	printf("please input string : ");
	/*scanf("%s", buf);*/

	/*gets(buf);*/
	p = fgets(buf, sizeof(buf), stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	printf("buf  = %p p = %p\n", buf, p);
	printf("buf  = %s\n", buf);


	return 0;
}
