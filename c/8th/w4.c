#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char
int main(void)
{
	int i;
	char ch;
	int count = 0;
	char *new = NULL, *prev = NULL;

	while(1)
	{
		printf("please input %d char : ", count + 1);
		scanf("%c", &ch);

		while (getchar() != '\n')
			;
		if (ch == 'q')
		{
			break;
		}

		new = (char *)malloc(sizeof(char) * (count + 1));
		if (NULL == new)
		{
			return -1;
		}
		memmove(new, prev, sizeof(char) * count);
		free(prev);
		memmove(new + count, &ch, sizeof(char));
		prev = new;
		/*printf("ch = %c\n", ch);*/
		count++;
	}

	for (i = 0; i < count; i++)
	{
		putchar(new[i]);
	}
	printf("\n");
	free(new);
	return 0;
}
