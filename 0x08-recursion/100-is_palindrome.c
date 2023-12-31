#include "main.h"

/**
 * _strlen - is for calculating the length of str
 * @s: is the string
 * Return: the bloody length
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	else
		return (0);
}
/**
 * helper - just for help
 * @s: is the string
 * @st: is the start
 * @end: is the end
 * Return: 0 if not plain 1 if it is
 */
int helper(char *s, int st, int end)
{


		if (st >= end)
		{
			return (1);
		}
		else if (s[st] != s[end])
		{
			return (0);
		}
		else
		{
			return (helper(s, st + 1, end - 1));
		}
}



/**
 * is_palindrome - checks if the string is plain
 * @s: this is the string that will be checked
 * Return: 1 if plain 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s) - 1;

	if (len < 0)
	{
		return (0);
	}
	return (helper(s, 0, len));
}
