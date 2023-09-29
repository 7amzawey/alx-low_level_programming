#include "main.h"
/**
 * _strlen_recursion - this function returns the
 * length of the string
 * @s: is the streng
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	static int count;

	if (*s == '\0')
	{
		return (0);
	}
	count++;
	_strlen_recursion(s + 1);
	return (count);
}
