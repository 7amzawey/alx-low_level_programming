#include "main.h"
/**
 * print_number - prints n
 * @n: the printed number
 */
void print_number(int n)
{
int i, j, k, div;
if (n < 0) /* handle negative numbers */
{
_putchar('-'); /* print the minus sign */
n = -n; /* make n positive */
}
if (n == 0) /* handle zero */
{
_putchar('0'); /* print zero */
return; /* end the function */
}
i = n; /* copy n to i */
j = 0; /* initialize j to zero */
while (i > 0) /* count the number of digits in n */
{
i /= 10; /* divide i by 10 */
j++; /* increment j by 1 */
}
div = 1; /* initialize div to 1 */
for (k = 1; k < j; k++) /* calculate the divisor for the first digit */
{
div *= 10; /* multiply div by 10 */
}
while (div > 0) /* loop through each digit of n */
{
_putchar((n / div) % 10 + '0'); /* print the current digit */
div /= 10; /* reduce the divisor by 10 */
}
}
