#include <stdio.h>
#include <string.h>

/*
 *void display(char s[], int len)
 *{
 *    int i;
 *
 *    for (i = 0; i < len; i++)
 *    {
 *        putchar(s[i]);
 *    }
 *    putchar(10);
 *    printf("%s\n", s);
 *}
 */
int mystrlen(char s[])
{
	int i = 0;
	while (s[i] != '\0')
		i++;

	return i;
}
int main(void)
{
	int i = 0;
	char buf[128] = "hello kdsh   kjhdsa  kjdjfs a jdsa";
	char ch;

	while(1)
	{
		printf("please input %d char : ", i + 1);
		scanf("%c", &ch);
		if (ch == 'q')
			break;
		while (getchar() != '\n')
			;
		buf[i] = ch;
		i++;
	}
	buf[i] = '\0';
	
	/*display(buf, strlen(buf));*/
	printf("strlen(buf) = %d\n", strlen(buf));
	printf("mystrlen(buf) = %d\n", mystrlen(buf));
	printf("buf = %s\n", buf);
	return 0;
}
