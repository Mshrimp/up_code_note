#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, m, n;
	char name[10][10];
	int out = 0, count = 0;

	printf("please input m and n : ");
	scanf("%d%d", &m, &n);
	getchar();

	for (i = 0; i < m; i++)
	{
		printf("please input %d name : ", i + 1);
		fgets(name[i], sizeof(name[i]), stdin);
		if (name[i][strlen(name[i]) - 1] == '\n')
			name[i][strlen(name[i]) - 1] = '\0';

	}

	for (i = 0; i < m; i++)
	{
		printf("%s ", name[i]);
	}
	printf("\n");

	while (out < m)
	{
		for (i = 0; i < m; i++)
		{
			if (name[i][0] != '\0')
			{
				count++;
			}
			if (count == n)
			{
				printf("%s ", name[i]);
				name[i][0] = '\0';
				count = 0;
				out++;
			}
		}
	}
	printf("\n");
	return 0;
}
