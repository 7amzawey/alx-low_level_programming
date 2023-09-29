#include "main.h"
/**
 * helper - is helping idiot
 * @n: is the number that will be checked
 * @i: is the helping as well
 * Return: if the number is prime or not
 */
int helper(int n, int i)
{


	if (i > n / 2)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
	return (helper(n, i + 1));
	}
}



/**
 * is_prime_number - is detecting if the number
 * is prime or not
 * @n: the number that will be checked
 * Return:1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (helper(n, 2));
}
