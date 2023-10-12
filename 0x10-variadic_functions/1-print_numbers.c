#include "variadic_functions.h"
/**
 * print_numbers - that will print numbers broooh
 * @separator: is the string to be printed between
 * numbers
 * @n: is the number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mo;

	va_start(mo, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mo, int));
		if (i != (n - 1))
		printf("%s", separator);
	}
	printf("\n");
}
