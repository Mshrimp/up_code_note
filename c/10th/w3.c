#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s1[1024], s2[1024];
	int i = 0, j;
	char buf[1024];//保存公共字串max
	char *tmp = s2, *p = NULL;
	int max = 0;


	printf("please input string1: ");
	fgets(s1, sizeof(s1), stdin);
	if (s1[strlen(s1) - 1] == '\n')
		s1[strlen(s1) - 1] = '\0';

	printf("s1 = %s\n", s1);
	printf("please input string2: ");
	fgets(s2, sizeof(s2), stdin);
	if (s2[strlen(s2) - 1] == '\n')
		s2[strlen(s2) - 1] = '\0';

	printf("s2 = %s\n", s2);


	for (i = 0; i < strlen(s1); i++)//循环s1
	{
		tmp = s2;//每次重新指向s2开头
		while((p = strchr(tmp, s1[i])) != NULL)
		{
			for (j = 2; j <= strlen(s1) - i; j++)
			{
				if (strncmp(s1 + i, p, j) == 0)
				{
					if (max < j)
					{
						strncpy(buf, p, j);
						buf[j] = '\0';
						max = j;
					}
				}
				else
				{
					break;
				}
			}
			tmp = p + 1;
		}
	}
	printf("buf = %s\n", buf);
	return 0;
}
