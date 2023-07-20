#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - this draw a diagnol line on the terminal
 * @n: the number of times that will be printed
 */
void print_diagonal(int n)
{int i;
int j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	putchar('\n');
}
