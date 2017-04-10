#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# if 0
int cut_word(char *s, char (*p)[10])
{
	int i = 0, j = 0;

	while(*s != '\0')
	{
		if (*s == ',')
		{
			p[i][j] = '\0';
			i++;
			j = 0;
		}
		else
		{
			p[i][j]= *s;
			j++;
		}
		s++;
	}
	p[i][j] = '\0';

	return i + 1;
}
#else
int cut_word(char *s, char **p)
{
	int count = 0;
	
	p[count++] = s;

	while(*s != '\0')
	{
		if (*s == ',')
		{
			*s = '\0';
			p[count++] = s + 1;
		}
		s++;
	}
	return count;
}
#endif
int main(void)
{
	int i, j;
	char buf[] = "12:56,22:23,7:11,13:01,5:53,12:09,1:59,19:12,5:15";
	char *tmp = buf;
	char t[strlen(buf) + 1];
	char name[10][10];
	char *s[100];//指针数组
	int count = 0;

	/*strcpy(s[0],"hello");*/

	/*printf("s[0] = %s\n", s[0]);*/
	printf("before : buf = %s %p\n", buf, buf);


	/*count = cut_word(buf, name);*/
	count = cut_word(buf, s);
	for (i = 0; i < count; i++)
	{
		printf("%s ", s[i]);
	}
	printf("\n");


	printf("===============\n");
	while ((s[count++] = strsep(&tmp, ",")) != NULL)
		;

	for (i = 0; i < count - 1; i++)
	{
		for (j = i + 1; j < count - 1; j++)
		{
			if (atoi(s[i]) > atoi(s[j]))
			{
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
			else if (atoi(s[i]) == atoi(s[j]) && atoi(strchr(s[i], ':') + 1) > atoi(strchr(s[j], ':') + 1))
			{
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			
			}
		}
	}
	int len = 0;
	for (i = 0; i < count - 1; i++)
	{
		strcpy(t + len, s[i]);
		len += strlen(s[i]);
		strncpy(t + len, ",", 1);
		len += 1;
	}
	t[len - 1] = '\0';
	strcpy(buf, t);
	/*printf("t = %s\n", t);*/
	printf("after  : buf = %s\n", buf);
	return 0;
}
