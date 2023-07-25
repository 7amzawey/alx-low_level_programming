#include "main.h"
/**
 * _strlen - returns the size of a string
 * @s: the pointer
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
