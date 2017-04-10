#include <stdio.h>
#include <string.h>

int main(void)
{
	int x, y;

	system("clear");
	printf("please input x and y : ");
	scanf("%d%d", &x, &y);

	printf("\033[%d;%dHhello!\n", x, y);
	return 0;
}
