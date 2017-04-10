#include <stdio.h>


int count_num(int num)
{
	int count = 0;

	while(num)
	{
		num /= 10;
		count++;
	}

	return count;
}
int main(void)
{
	int num;
	int len;
	int i, j, h, l, t;

	printf("please input number : ");
	scanf("%d", &num);

	getchar();
	len = count_num(num);
	
	printf("len = %d\n", len);

	for (i = 0; i < len / 2; i++)
	{
		for (j = 0, t = 1; j < len - i - 1; j++)
		{
			t *= 10;
		}
		h = num / t % 10;

		for (j = 0, t = 1; j < i; j++)
		{
			t *= 10;
		}
		l = num / t % 10;

		if (h != l)
		{
			printf("%d不是回文数!\n", num);
			return -1;
		}
		/*printf("h = %d l = %d\n", h, l);*/
	}

	printf("%d是回文数!\n", num);
	return 0;
}
