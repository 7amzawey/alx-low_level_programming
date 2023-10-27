#include "main.h"
/**
 * clear_bit - sets the value of a bit to zero at a
 * given index
 * @n: is the number
 * @index: is the index of the bit
 * Return: 1 if succedded 0 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
