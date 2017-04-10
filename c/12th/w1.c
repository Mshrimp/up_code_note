#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERRP(con, func, ret) do{			\
						if (con)			\
						{					\
							perror(func);	\
							ret;			\
						}					\
					}while(0)

int main(int argc, char *argv[])
{
	//argv[1] -> r
	//argv[2] -> w
	char buf[1024];
	FILE *fpr = NULL;
	FILE *fpw = NULL;
	int ret;
	fpr = fopen(argv[1], "r");
	ERRP(NULL == fpr, "fopen read", goto ERR1);

	fpw = fopen(argv[2], "w");
	ERRP(NULL == fpw, "fopen write", goto ERR2);


	while((ret = fread(buf, sizeof(char), sizeof(buf), fpr)) > 0)
	{
		fwrite(buf, sizeof(char), ret, fpw);
	}
	fclose(fpr);
	fclose(fpw);
	return 0;
ERR2:
	fclose(fpr);
ERR1:
	return -1;
}
