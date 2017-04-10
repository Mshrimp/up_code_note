#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int count = 0;
	int i;
	char buf[128];
	char *name[10] = {};

	printf("name[0] = %p\n", name[0]);
	/*strcpy(name[0], "zhang san");*/

	while(1)
	{
		printf("please input %d name : ", count + 1);
		fgets(buf, sizeof(buf), stdin);
		if (buf[strlen(buf) - 1] == '\n')
			buf[strlen(buf) - 1] = '\0';

		if (!strcmp(buf, "exit"))
		{
			break;
		}
		name[count] = (char *)malloc(strlen(buf) + 1);
		if (name[count] == NULL)
		{
			return -1;
		}

		strcpy(name[count], buf);
		count++;
	}

	for (i = 0; i < count; i++)
	{
		printf("name[%d] = %s\n", i, name[i]);
	}

	for (i = 0; i < count; i++)
	{
		free(name[i]);
	}
	return 0;
}
