#include "main.h"
/**
 * _strlen _ returns the size of a string
 * @n: the pointer
 */
int _strlen(char *s)
{
	int length = 0;
	while(*s++)
	{
		length++;
	}
	return (length);
}
