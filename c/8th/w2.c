#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strcpy(char *dest, const char *src)
{
	char *p = NULL;
	p = dest;
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return p;

}
char *my_strncpy(char *dest, const char *src, size_t n)
{
	char *p = NULL;
	p = dest;
	while(*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return p;

}

char *my_strcat(char *dest, const char *src)
{
	char *tmp;
	tmp = dest;
	while(*dest != '\0')
		dest++;
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return tmp;
}
int my_strcmp(const char *s1, const char *s2)
{
	while(*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}

	if ((*s1 - *s2) > 0)
		return 1;
	else if ((*s1 - *s2) < 0)
		return -1;
	else
		return 0;
}

char *my_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (char *)s;
		}
		s++;
	}

	return NULL;
}
char *my_strrchr(const char *s, int c)
{
	char *tmp = NULL;
	while(*s != '\0')
	{
		if (*s == c)
		{
			tmp = (char *)s;
		}
		s++;
	}
	return tmp;
}

char *my_strstr(const char *haystack, const char *needle)
{
	/*int len = strlen(needle);*/

	while(*haystack != '\0')
	{
		// hello ll
		if (*haystack == *needle && strncmp((char *)haystack, (char *)needle, strlen(needle)) == 0)
		{
			return (char *)haystack;
		}
		haystack++;
	}
	return NULL;
}

int main(void)
{
	char dest[128];
	char src[128];
	char *p = NULL;
	char ch = 128;

	printf("ch = %d %c\n", ch, ch);

	printf("dest = %s\n", dest);
	/*p = my_strcpy(dest, "hello");*/
	p = my_strncpy(dest, "hello", 2);//he
	p = my_strcat(dest, "hello");
	printf("p = %s\n", p);
	printf("dest = %s\n", dest);
	printf("my_strcmp(make, mask) = %d\n", my_strcmp("make", "mask"));
	printf("my_strchr(hello, l) = %s\n", my_strchr("hello", 'l'));
	printf("my_strrchr(hello, l) = %s\n", my_strrchr("hello", 'l'));
	printf("my_strstr(hello, ll) = %s\n", my_strstr("hello", "Lo"));
	// 'l' "l"

	return 0;
}
