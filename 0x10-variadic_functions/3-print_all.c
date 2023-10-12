#include "variadic_functions.h"
/**
 * struct str - the bloody structure
 * @type_id: the type identifier
 * @print_func: the print function
 */
struct str
{
char type_id;
void (*print_func)(va_list);
};
/**
 * print_char - prints char
 * @last: is the last
 * @args: kk
 */
void print_char(va_list args, int last)
{
	char c = va_arg(args, int);

	printf("%c%s", c, last ? "\n" : ", ");
}
/**
 * print_string - prints a bloody string
 * @last: is the last
 * @args: kk
 */
void print_string(va_list args , int last)
{
	char *s = va_arg(args, char*);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s%s", s, last ? "\n" : ", ");
}
/**
 * print_int - prints a bloody int
 * @last: is the last
 * @args: kk
 */
void print_int(va_list args, int last)
{
	int i = va_arg(args, int);

	printf("%d%s", i, last ? "\n" : ", ");
}
/**
 * print_float - prints a bloody float
 * @last: is the last
 * @args: KK
 */
void print_float(va_list args, int last)
{
	double f = va_arg(args, double);

	printf("%f%s", f, last ? "\n" : ", ");
}
/**
 * stuct str print_funcs - cool
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
