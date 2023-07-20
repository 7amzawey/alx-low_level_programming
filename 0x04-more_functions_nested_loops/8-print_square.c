#include "main.h"
/**
 * print_square - print square a number of times
 * @size: the size of squares
 */
void print_square(int size)
{int n;
int j;
	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (j = 0 ; j < size; j++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

