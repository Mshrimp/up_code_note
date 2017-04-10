#include <stdio.h>

void Swap(int a, int b)
{
	printf("swap1!\n");
}
void Swap(int *a, int *b)
{
	printf("swap2!\n");
}
/*
void Swap(int &a, int &b)
{
	printf("swap3");
}
*/
int main(void)
{
	int a = 10, b;

	return 0;
}
