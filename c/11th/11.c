#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//cp file1 file2
int main(int argc, char *argv[])
{
	// file1 -> src -> argv[1] -> r
	// file2 -> dest -> argv[2] -> w
	int i;
	FILE *fpr = NULL, *fpw = NULL;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	fpr = fopen(argv[1], "r");
	if (fpr == NULL)
	{
		perror("fopen read");
		return -1;
	}

	fpw = fopen(argv[2], "w");
	if (fpw == NULL)
	{
		fclose(fpr);
		perror("fopen write");
		return -1;
	}

	char ch;
	while ((ch = fgetc(fpr)) != EOF)
	{
		fputc(ch, fpw);
	}

	fclose(fpw);
	fclose(fpr);
	return 0;
}
