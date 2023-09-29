#include "main.h"
/**
 * factorial - it returns the factorial of a
 * certain number
 * @n: the certain number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
