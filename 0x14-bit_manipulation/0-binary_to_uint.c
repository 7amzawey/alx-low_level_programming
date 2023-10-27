#include "main.h"
/**
 * num_power - calculate the value of a num powered
 * to another number
 * @num: is the number
 * @times: is the power
 * Return: the value
 */
int num_power(int num, int times)
{
	int sum = 1;
	int i;

	if (times == 0)
		return (1);
	for (i = 0; i < times; i++)
	{
		sum  = sum * num;
	}
	return (sum);
}
/**
 * binary_to_uint - a function that converts a binary
 * to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: the converted number number or 0 if there
 * is one or more chars int the string
 * and if b == NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int i;
	int size = 0;
	int j = 0;

	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		size++;
		j++;
	}
	if (b == NULL)
		return (0);

	else
	{
		for (i = size - 1; i >= 0; i--)
		{
			conv += ((b[i] - '0') * num_power(2, size - i - 1));
		}
	}
	return (conv);
}
