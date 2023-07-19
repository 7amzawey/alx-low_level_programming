#include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n: the number that will be the entry
 *
 * Return : the numbers between n and 98
 */
void print_to_98(int n)
{int c;
	if (n < 98)
	{
		for (c = n; c < 99; c++)
		{
			_putchar(c);
			if (c != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	else
	{
		for (c = n; c >= 98; c--)
		{
			_putchar(c);
			if (c != n)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
}
