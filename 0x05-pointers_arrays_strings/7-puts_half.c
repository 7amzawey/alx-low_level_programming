#include "main.h"
/**
 * puts_half - should print second half of the string
 * @str: the fucken pointer of the string
 * Return: the half of the string
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
