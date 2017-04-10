#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GETLINES(string, buf) do{								\
						printf(string);							\
						fgets(buf, sizeof(buf), stdin);			\
						if (buf[strlen(buf) - 1] == '\n')		\
							buf[strlen(buf) - 1] = '\0';		\
					}while(0)
int main(void)
{
	char s[128];

	GETLINES("please input string : ", s);

	printf("buf = %s\n", s);
	return 0;
}
