#include "variadic_functions.h"
/**
 * sum_them_all - it sums them all dudddeee
 * @n: is the number of arguments
 * Return: 0 if n == 0. and the sum if not idiot
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list mo;

	va_start(mo, n);
	if (n == 0)
	return (0);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(mo, int);
	}
	va_end(mo);
	return (sum);
}
