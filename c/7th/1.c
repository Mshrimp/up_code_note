#include <stdio.h>
#include <string.h>

void init(char name[][128])
{
	int i = 0;
    /*
	 *printf("init : sizeof(name) = %d\n", sizeof(name));
	 *printf("init : strlen(name) = %d\n", strlen(name));
     */

	while (name[i][0] != '\0')
	{
		printf("%s ", name[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	char name[128][128] = {"hello", "world"};

	init(name);
    /*
	 *printf("main sizeof(name) = %d\n", sizeof(name));
	 *printf("main : strlen(name) = %d\n", strlen(name));
     */
	return 0;
}
