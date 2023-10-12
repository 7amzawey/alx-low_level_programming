#include "variadic_functions.h"
/**
 * str - the bloody structure
 * Description: dheo
 */
struct str
{
char type_id;
void (*print_func)(va_list);
};
/**
 * print_char - prints char
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}
/**
 * print_string - prints a bloody string
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char*);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}
/**
 * print_int - prints a bloody int
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}
/**
 * print_float - prints a bloody float
 */
void print_float(va_list args)
{
	double f = va_arg(args, double);

	printf("%f", f);
}
/**
 * str print_func[] - an array of sturcts
 */
struct str print_funcs[] = {
{'c', print_char},
{'i', print_int},
{'s', print_string},
{'f', print_float}
};
/**
 * print_all - that prints every thing
 * @format: is the format idiot
 */
void print_all(const char * const format, ...)
{
	va_list mo;

	va_start(mo, format);

	int i = 0;

	unsigned long int j;

	char current;

	while ((current = format[i]) != '\0')
	{
		j = 0;
		while (j < sizeof(print_funcs) / sizeof(struct str))
		{
			if (current == print_funcs[j].type_id)
			{
				print_funcs[j].print_func(mo);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(mo);
	putchar('\n');

}
