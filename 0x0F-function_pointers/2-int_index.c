#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @array: is the array that we will be searching
 * about the number at
 * @size: is the array's
 * @cmp: is the function
 * Return: the first element for which the cmp does not
 * return 0: if the elment doesn't match return 0. if
 * size <= 0 return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	if (!cmp)
	return (-1);
	return (0);
}
