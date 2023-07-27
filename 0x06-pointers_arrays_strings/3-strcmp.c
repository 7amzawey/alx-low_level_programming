#include "main.h"
/**
 * _strcmp - this function compares two strings
 * @s1: is the first string
 * @s2: is the second string
 * Return: the defferience between them
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		i++;

		}
		else
		{
			return (0);
		}
	}
return (s1[i] - s2[i]);
}

