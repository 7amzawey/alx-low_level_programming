#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 * @s: the arrays of characters
 * Return: capital words
 */
char *cap_string(char *s)
{
	int i = 0;
	{
		if(s[i] == '\0' && s[i] == ' ')
		{
		if ((s[i + 1] >= 'a' && s[i + 1] <= 'z') || (s[0] >= 'a' && s[0] <= 'z'))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		i++;
		}
	}
	return (s);
}
