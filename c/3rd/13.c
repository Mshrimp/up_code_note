#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;

AA:
	sum += i;
	i++;
	if (i <= 100)
		goto AA;

	printf("1 + 2 + 3 + ... + 100 = %d\n", sum);
	return 0;
}
