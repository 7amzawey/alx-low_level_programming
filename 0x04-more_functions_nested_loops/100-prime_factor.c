#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long i = 2;
	long max = 0;

	while (n > 1)
	{
		if (n % i == 0)
		{
			n = n / i;
			max = i;
			i = 2;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", max);
	return (0);
}
