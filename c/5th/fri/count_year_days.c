#include "fri.h"

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
