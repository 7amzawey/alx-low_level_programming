#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: is the first number
 * @m: is the 2nd number
 * Return: the number of bit you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		i = i + (xor & 1);
		xor >>= 1;
	}
	return (i);
}
