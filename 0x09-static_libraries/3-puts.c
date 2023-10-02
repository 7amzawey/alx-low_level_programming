#include "main.h"
#include <stdio.h>
/**
 * _puts - print the string followed by a new fucken line.
 * @str: the string that will be printed
 * Return: will return the printed string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	putchar('\n');
}
