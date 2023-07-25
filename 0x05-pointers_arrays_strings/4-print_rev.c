#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the fucken pointer
 * Return: the reversed string
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}

