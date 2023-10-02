#include "main.h"
/**
 * _isupper - checks fo uppercase character
 * @c: the checked number
 * Return: 1 if its uppercase otherwise 0
 */
int _isupper(int c)
{
int n;
	for (n = 'A'; n <= 'Z'; n++)
	{
		if (c == n)
		{
		return (1);
		}
	}
	return (0);
}
