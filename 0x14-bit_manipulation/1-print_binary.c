#include "main.h"
/**
 * print_binary - this function prints the binary
 * representation of a num.
 * am not allowed to use arrays or malloc or % or /
 * idk wth am gonna use those guys think that am Mark
 * zuckerberg or something
 * @n: this is tth number is the number that will
 * converted to binary
 * Return: the representaion of a number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1ul << ((sizeof(n) * 8 - 1));
	int started = 0;

	while (mask)
	{
	if (n & mask)
	{
		_putchar('1');
		started = 1;
	}
	else if (started)
	{
		_putchar('0');
	}
	mask >>= 1;
	}
	if (!started)
	{
		_putchar('0');
	}
}
