#include <stdio.h>

//求今年有多少个黑色星期五 13
//统计年份
int is_year(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		return 1;
	return 0;
}
int count_year_days(int sy, int ey)
{
	int days = 0;
	int i;

	for (i = sy; i < ey; i++)
	{
		days += 365 + is_year(i);
	}
	return days;
}
int count_month_days(int month, int year)
{
	int days = 0;
	int i;

	for (i = 1; i < month; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
		{
			days += 31;
		}
		if (i == 2)
		{
			days += 28 + is_year(year);
		}
		if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			days += 30;
		}
	}
	return days;
}
int main(void)
{
	int year = 2016, month, day;
	int i, days = 0;

	printf("please input year : ");
	scanf("%d", &year);
	//统计年总天数

	days += count_year_days(1990, year) + 13;
	/*printf("days = %d\n", days);*/

	int d;
	for (i = 1; i <= 12; i++)
	{
		d = days + count_month_days(i, year);
		/*printf("%d : days = %d\n", i, days);*/
		if (d % 7 == 5)
		{
			printf("%d月13日是黑色星期五!\n", i);
		}
	}

	printf("===================\n");
	while (1)
	{
		printf("plesea input year : month : day : ");
		scanf("%d:%d:%d", &year, &month, &day);

		
		days = count_year_days(2000, year) + count_month_days(month, year) + day - 1;
		if (days %  5 < 3)
		{
			printf("打鱼!\n");
		}
		else
		{
			printf("晒网!\n");
		}
	}
	return 0;
}
