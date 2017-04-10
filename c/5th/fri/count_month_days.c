#include "fri.h"


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
