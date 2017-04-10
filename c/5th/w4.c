#include <stdio.h>

//定义一个宏命令 就是常量
#define MAX 10

int main(void)
{
	int i, j;
	int a[MAX];
	int count = 0;
	int max, sec;
	/*MAX = 12;*/

	srand(time(NULL));
	//初始化
	for (i = 0; i < MAX; i++)
	{
		a[i] = rand() % 9 + 1;
	}

	//遍历
	for (i = 0; i < MAX; i++)
	{
		printf("%d ", a[i]);
	}
	putchar(10);


	max = sec = rand() % 9 - 9;
	printf("max = %d sec = %d\n", max, sec);
	for (i = 0; i < MAX; i++)
	{
		for (j = 0, count = 0; j < MAX; j++)
		{
			if (a[i] == a[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d ", a[i]);
			if (max < a[i])
			{
				sec = max;
				max = a[i];
			}
			else if (sec < a[i])
			{
				sec = a[i];
			}
            /*
			 *printf("max = %d sec = %d\n", max, sec);
			 *getchar();
             */
		}
	}
	putchar(10);


	printf("sec = %d\n", sec);
	return 0;
}
