#include "main.h"
/**
 * print_number - used instead of print f
 * print_to_98 - print from n to 98
 * @n: the number that will be the entry
 *
 * Return : the numbers between n and 98
 */
void print_number(int n)
{
int i, j, div;
if (n < 0)
{
_putchar('-');
n = -n;
}
div = 1;
for (i = n; i >= 10; i /= 10)
{
div *= 10;
}
for (j = div; j >= 1; j /= 10)
{
_putchar((n / j) % 10 + '0');
}
}
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 * Return: void
 */
void print_to_98(int n)
{int c;
	if (n <= 98)
	{
		for (c = n; c < 99; c++)
		{
			print_number(c);
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
			_putchar(c != 98);
			if (c != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
