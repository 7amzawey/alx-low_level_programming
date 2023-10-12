#include "variadic_functions.h"
/**
 * print_strings - prints stings followed by a newline
 * @separator: is the string to be printed between
 * the strings
 * @n: is the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mo;
	char *str;

	va_start(mo, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(mo, char *);
		if (str == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	va_end(mo);
	printf("\n");
}
