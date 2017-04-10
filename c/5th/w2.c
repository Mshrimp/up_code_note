#include <stdio.h>

int count = 1;

void move(int num, char from, char to)
{
	printf("第%d步：把 %d 号从 %c -> 到 %c\n", count++, num, from, to);
}
void hanoi(int num, char from, char on, char to)
{
	if (num == 1)
	{
		printf("第%d步：把 %d 号从 %c -> 到 %c\n", count++, num, from, to);
		/*printf("%d : %c -> %c\n", num, from, to);*/
	}
	else
	{
		hanoi(num - 1, from, to, on);
		move(num, from, to);
		hanoi(num - 1, on, from, to);
	}
}
int main(void)
{
	int num;

	printf("please input nunber : ");
	scanf("%d", &num);

	hanoi(num, 'A', 'B', 'c');
	return 0;
}
