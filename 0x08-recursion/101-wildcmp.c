#include "main.h"

/**
 * wildcmp - compares to funcs
 * @s1: is the first string
 * @s2: is the second string
 * Return: 1 if they are identic 0 if not
 */

int _strlen(char *s)
{	int length = 0;
	
	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
int helper(char *s1, char *s2, int i)
{
	
	if(s1[i] != s2[i])
	{
	return 0;
	}
	else if( s1[i] == '\0')
	{
		return (1);
	}
	else
	{
	return (helper(s1, s2, i + 1));
	}
	
}
int wildcmp(char *s1, char *s2)
{

	if (_strlen(s1) != _strlen(s2))
	{
		return(0);
	}
	return (helper(s1, s2, 0));
}
