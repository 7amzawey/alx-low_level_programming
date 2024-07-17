#include "search_algos.h"
/**
 * binary_search - is a function that search for a value in an array
 * @array: is a pointer to the first element of the array
 * @size: is the size of the array
 * @value: is the value to search for
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high;
	if (size == 0 || array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		size_t i;
		size_t mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
		
		if (i < high)
			printf(", ");
		}
	printf("\n");

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] > value)
	{
		high = mid - 1;
	}
	else
	{
		low = mid + 1;
	}
	}
	return (-1);
}
