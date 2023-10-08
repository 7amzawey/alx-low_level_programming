#include "main.h"
#include <stdlib.h>
/**
 * *array_range - write a function that creates an
 * array of integers
 * @min: is the min of the vlaues
 * @max: is the max of the values
 * Return: NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptr[i - min] = i;
	}
	return (ptr);
}
