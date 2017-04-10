#include <stdio.h>
#include <string.h>

//实现strcpy函数
void my_strcpy(char dest[], char src[])
{
	/*printf("src = %s\n", src);*/
	int i = 0;

	while((dest[i] = src[i++]) != '\0')
		;
    /*
	 *while(src[i] != '\0')
	 *{
	 *    dest[i] = src[i];
	 *    i++;
	 *}
	 *dest[i] = '\0';
     */
}

void my_strncpy(char dest[], char src[], int size)
{
	int i = 0;

	while(src[i] != '\0' && size--)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int my_strcmp(char s1[], char s2[])
{
	int i = 0;
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if ((s1[i] - s2[i]) < 0)
		return -1;
	else if ((s1[i] - s2[i]) > 0)
		return 1;
	else
		return 0;

}


int main(void)
{
	char s[128] = "AAAAAAAAAAAAAAAAAAAA";

	/*my_strcpy(s, "hello");*/
	my_strncpy(s, "hello" + 2, 2);
	printf("s = %s\n", s);

	printf("my_strcmp(make, mask) = %d\n", my_strcmp("make", "mask"));
	printf("strcmp(make, mask) = %d\n", strcmp("make", "mask"));
	return 0;
}
