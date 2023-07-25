#include "main.h"
/**
 * rev_string.c - prints an string reverse
 * @s: the reversed variable
 * Return: the variable and its reverse
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');
	while (s[len] >= 0)
{
	_putchar(s[len]);
	len--;
}
_putchar('\n');
}
