#include "main.h"
/**
 * putchar - prints two and one digit numbers
 * @i: the printed number
 */
int nutchar(int i)
{
if (i <= 9)
{
_putchar(i + '0');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
}
