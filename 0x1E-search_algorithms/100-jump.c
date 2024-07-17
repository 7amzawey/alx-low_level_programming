#include "search_algos.h"
/**
 * jump_search - this function searches for a value in a sorted array usin jump
 * @array: is a ptr to the 1st element
 * @value: is the value to search for
 * @size: is the size of the array
 * Return: the index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, j, i;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	j = 0;
	while (value > array[j] && j <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		j = j + jump;
	}
	if (j > size)
	{
		j = j - jump;
		printf("Value found between indexes [%ld] and [%ld]\n", j, j + jump);
		for (i = j; i < size; i++)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		return (-1);
	}
	else
	{
	printf("Value found between indexes [%ld] and [%ld]\n", j - jump, j);
	for (i = j - jump; i <= size && i <= j; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	}
	return (-1);
}
