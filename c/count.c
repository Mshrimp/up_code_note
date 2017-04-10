#include <stdio.h>

#define MAXSIZE 50
#define INITPATH //home//xiami//test//count//initdata3-1.csv
//#define DESTPATH /home/xiami/test/count/data/

int main (void)
{
//	int ch;
	FILE *InitData;
	char buffer[MAXSIZE];
//	char initpath[100];
//	char destpath[100];

//	initpath = INITPATH;

	InitData = fopen("INITPATH", "r");
	if (InitData == NULL)
	{
		perror("InitData open failed!");
		return 0;	
	}

	while (fgets(buffer, MAXSIZE, InitData) != NULL)
		printf("%s\n", buffer);

	if (fclose(InitData) != 0)
	{
		perror("Close file failed!");
		return 0;
	}

	return 0;
}
