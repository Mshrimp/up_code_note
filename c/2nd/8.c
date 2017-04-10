#include <stdio.h>

int main(void)
{
	int a = 1122, b;
	char ch = 'A';

	printf("ch = %c\n", ch);
	printf("ch = %d\n", ch);
	printf("a = %c\n", a);


	printf("please input nunber : ");
	scanf("%d", &a);
	printf("please input nunber : ");
	scanf("%d", &b);
	getchar();
	printf("please input char : ");
	ch = getchar();
	/*scanf("%c", &ch);*/

	printf("a = %d b = %d\n", a, b);
	printf("ch = %c\n", ch);
	putchar(ch);
	/*putchar(10);*/
	printf("\n");
	putchar('\n');
	return 0;
}
