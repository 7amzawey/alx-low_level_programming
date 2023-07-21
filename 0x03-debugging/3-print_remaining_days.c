#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int leap = 0;

if (year % 4 == 0)
{
if (year % 100 == 0)
{
if (year % 400 == 0)
leap = 1;
}
else
leap = 1;
}
if (leap)
{
if (month > 2)
day++;
}
else
{
if (month == 2 && day == 29)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", leap ? 366 - day : 365 - day);
}
