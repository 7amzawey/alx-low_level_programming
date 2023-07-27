#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase 
 * 
 * Return: the uppercase letters
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] >= 'a' && s[i] <= 'z' && s[i] != '\0')
	{
		s[i] = s[i] - 32;
		i++;
	}
	return (s);

}
