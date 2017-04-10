#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char name[10][100] = {"tom", "jim", "mary"};

	// zhang san | li si | wang ma zi


	/*name[0] = "zhang san";*/
	strcpy(name[0], "zhang san");

	for (i = 0; i < 3; i++)
	{
		printf("please input %d name : ", i + 1);
		fgets(name[i], sizeof(name[i]), stdin);
		if (name[i][strlen(name[i]) - 1] == '\n')
			name[i][strlen(name[i]) - 1] = '\0';

        /*
		 *for (j = 0; j < strlen(name[i]); j++)
		 *{
		 *    putchar(name[i][j]);
		 *}
		 *putchar(10);
         */
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s ", name[i]);
	}
	printf("\n");
	printf("strlen(name[0]) = %d\n", strlen(name[0]));
	printf("sizeof(name) = %d\n", sizeof(name));//400 100
	return 0;
}
