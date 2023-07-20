#include "main.h"
#include <stdio.h>
/**
 * print_numbers : prints the numbers from 0 to 9 followed by a newline
 * Return: always 0
 */
void print_numbers(void)
{int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 || i != 4)
{
_putchar(i);
}
}
_putchar('\n');
}
