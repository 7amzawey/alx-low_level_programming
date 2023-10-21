#include "main.h"
/**
 * helper - just for help
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if identical 0 if not
 */
int helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		if (*s1 != '\0' && helper(s1 + 1, s2))
		{
		return (1);
		}
		return (helper(s1, s2 + 1));
	}
	else if (*s1 != *s2)
	{
		return (0);
	}
	else
	{
		return (helper(s1 + 1, s2 + 1));
	}
}
/**
 * wildcmp - compares to funcs
 * @s1: is the first string
 * @s2: is the second string
 * Return: 1 if they are identic 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (helper(s1, s2));
}
