#include "fri.h"

int main(void)
{
	int year = 2016, month, day;
	int i, days = 0;

	printf("please input year : ");
	scanf("%d", &year);

	days += count_year_days(1990, year) + 13;

	int d;
	for (i = 1; i <= 12; i++)
	{
		d = days + count_month_days(i, year);
		if (d % 7 == 5)
		{
			printf("%d月13日是黑色星期五!\n", i);
		}
	}

/*
 *    printf("===================\n");
 *    while (1)
 *    {
 *        printf("plesea input year : month : day : ");
 *        scanf("%d:%d:%d", &year, &month, &day);
 *
 *        
 *        days = count_year_days(2000, year) + count_month_days(month, year) + day - 1;
 *        if (days %  5 < 3)
 *        {
 *            printf("打鱼!\n");
 *        }
 *        else
 *        {
 *            printf("晒网!\n");
 *        }
 *    }
 */
	return 0;
}
