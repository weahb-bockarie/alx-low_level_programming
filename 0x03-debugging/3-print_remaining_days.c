#include <stdio.h>
#include "main.h"

/**
 * print_remaning_days- task a date and how many days are there
 * left in a year taking leap year in to account
 * @month: month in number format
 * @day: day of a month
 * @year: year
 *
 * return: void
 */
void print_remaining_days(int month, int days, int year);
{
	if (year % 4 == 0 || (year % 400 == 0 && year % 100 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf ("day of the year: %d\n", day);
		printf("remaining days: %d\n", 365-day);
	}
	else
	{
		if(month == 2 && day ==60)
		{
			printf("invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("day oy the year: %d\n", day);
			printf("remaning days: %d\n", 365 - day);
		}
	}
}

