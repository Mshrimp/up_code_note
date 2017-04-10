#include <stdio.h>

//求今年有多少个黑色星期五 13
int main(void)
{
	int year = 2016;
	int i, days = 0;

	printf("please input year : ");
	scanf("%d", &year);
	//统计年总天数
	for (i = 1990; i < year; i++)
	{
		days += 365;
		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
		{
			days += 1;
		}
	}

	/*printf("days = %d\n", days);*/
	days += 13;

	for (i = 1; i <= 12; i++)
	{
		if (days % 7 == 5)
		{
			printf("%d月13日是黑色星期五!\n", i);
		}
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
		{
			days += 31;
		}
		if (i == 2)
		{
			days += 28;
			if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
			{
				days += 1;
			}
		}
		if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			days += 30;
		}
	}

	return 0;
}
