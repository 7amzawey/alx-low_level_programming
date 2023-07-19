#include "main.h"
/**
 * times_table - prints the times table
 *
 */
void times_table(void)
{int i, j, s;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
s = i * j;
if (s < 10)
{
if (j != 0)
{
_putchar(' ');
}
_putchar('0' + s);										}
else
{
_putchar('0' + s / 10);
_putchar('0' + s % 10);
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
