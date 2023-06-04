#include <stdio.h>

/**
 * print_remaining_days - prints all correct dates including leap years
 * @month: in number format
 * @day: day of the month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int totalDays = 365;
	int dayOfYear = 0;
	int i;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		daysInMonth[2] = 29; /* Update days in February for leap year */
		totalDays = 366;
	}

	if (month < 1 || month > 12)
	{
		printf("Invalid date: Month out of range.\n");
		return;
	}

	if (day < 1 || day > daysInMonth[month])

	{

		printf("Invalid date: Day out of range for the given month.\n");

		return;
	}

	for (i = 1; i <= month; i++)

	{

		dayOfYear += daysInMonth[i];

	}
	dayOfYear += day;

	printf("Day of the year: %d\n", dayOfYear);
	printf("Remaining days: %d\n", totalDays - dayOfYear);
}
