#include "main.h"
/**
 * _strchr - return a pointer
 * to the first occurence of the character
 * @s: the string
 * @c: the character
 * Return: the pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (&s[i]);
}
