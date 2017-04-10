#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define GETLINES(string, buf) do{								\
						printf(string);							\
						fgets(buf, sizeof(buf), stdin);			\
						if (buf[strlen(buf) - 1] == '\n')		\
							buf[strlen(buf) - 1] = '\0';		\
					}while(0)

extern errno;

int main(void)
{
	char path[128], mode[128];

	FILE *fp = NULL;

	GETLINES("please input file path : ", path);
	GETLINES("please input file mode : ", mode);

	printf("path = %s\n", path);
	printf("mode = %s\n", mode);
	
	fp = fopen(path, mode);
	if (fp == NULL)
	{
		perror("fopen");
		printf("errno = %d\n", errno);
		printf("strerror = %s", strerror(errno));
		printf("fopen failed!\n");
		return -1;
	}

/*
 *    fputc('A', fp);
 *    fputc('B', fp);
 *
 */

    /*
	 *printf("hello1\n");
	 *while(1)
	 *    sleep(1);
     */
	fclose(fp);
	return 0;
}
