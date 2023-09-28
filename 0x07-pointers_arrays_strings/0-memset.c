#include "main.h"
/**
 * *_memset -  writes a function that fills memory
 * @s: Pointer to the memory
 * @b: is a constant byte
 * @n: the first bytes of the memory pointed to by s
 * Return: the fucken value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
