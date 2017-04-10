#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//grep root /etc/passwd -> r
//a.out argv[1] argv[2]
//fgets 
int main(int argc, char *argv[])
{
	
	FILE *fp = NULL;
	char buf[128], tmp[128];
	int count = 0;
	char *s = NULL, *p = NULL;

	fp = fopen(argv[2], "r");
	if (fp == NULL)
	{
		return -1;
	}

	while(fgets(buf, sizeof(buf), fp) != NULL)
	{
		count++;
		s = buf;

		if ((p = strstr(s, argv[1])) != NULL)
		{
			printf("%d : ", count);
		}

		while((p = strstr(s, argv[1])) != NULL)
		{
			/*printf("s = %p p = %p\n", s, p);*/
		#if 0
			memset(tmp, 0, sizeof(tmp));
			strncpy(tmp, s, p - s);
		#else
			snprintf(tmp, p - s + 1,"%s", s);
			/*printf("tmp = %s\n", tmp);*/
		#endif
			printf("%s", tmp);
			printf("\033[31m%s\033[0m", argv[1]);
			s = p + strlen(argv[1]);
		}
		if (s != buf)
		{
			printf("%s", s);
		}

	}
	fclose(fp);
	return 0;
}
