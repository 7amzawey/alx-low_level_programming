#include "main.h"
/**
 * helper - is here to help idiot
 * @n: is the bloody number at the function
 * @i: this a helper as well
 * Return: alittle bit of help
 */
int helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the square route
 * @n: the number
 * Return: nothing
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		{
			return (-1);
		}
	return (helper(n, 0));
}
