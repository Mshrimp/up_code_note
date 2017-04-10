#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count = 0;
void stack(void)
{
	char s[1024];
	printf("count = %d\n", count++);
	stack();

}
int main(void)
{
	char s[12000000];
	printf("s[12000000] = %c\n", s[13000000]);
	/*stack();	*/
	return 0;
}
