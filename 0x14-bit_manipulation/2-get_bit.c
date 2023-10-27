#include "main.h"
/**
 * get_bit - this function returns the value of a bit
 * at a given index
 * @n: the number
 * @index: is the index of the position of the bit
 * Return: teh value of the bit at index index or -1
 * if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int num;

	while (n != 0)
	{
		num = n % 2;
		n = n / 2;
		if (i == index)
		{
		return (num);
		}
		i++;
	}
	return (-1);
}
