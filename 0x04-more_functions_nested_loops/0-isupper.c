#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks fo uppercase character
 * @n: the checked number 
 * Return: 1 if its uppercase otherwise 0
 */
int _issupper(int c)
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
