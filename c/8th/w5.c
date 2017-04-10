#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void del_space(char *s)
{
	while(*s != '\0')
	{	
		if (*s == ' ')
		{
			memmove(s, s + 1, strlen(s));
		}
		else
			s++;
	}
}
int count_word(char *s)
{
	int count = 0;

	while(*s == ' ')
		s++;

	while(*s != '\0')
	{
		if (*s == ' ' && *(s + 1) != ' ' && *(s + 1) != '\0')
		{
			count++;
		}
		s++;
	}
	return count + 1;
}
int main(void)
{
	char buf[128];

	printf("please input string : ");
	fgets(buf, sizeof(buf), stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	printf("buf = %s\n", buf);

	/*del_space(buf);*/
	printf("count = %d\n", count_word(buf));
	printf("buf = %s\n", buf);

	return 0;
}
