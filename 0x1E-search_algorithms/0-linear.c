#include "search_algos.h"
/**
 * linear_search - is a function that searchs for a value in an array
 * @array: is a pointer to the first elemet of the array to search in
 * @size: is the size of the array
 * @value: is the value to search for
 * Return: the index of the value where is's located
 */
int linear_search(int *array, size_t size, int value)
{
	int *arr = array;
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, arr[i]);
		if (arr[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
