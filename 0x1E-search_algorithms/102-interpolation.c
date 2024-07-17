#include "search_algos.h"
/**
 * this funciton is gonna search for a value in a sorted arr usin interpolation
 * @array: is a pointer to the first array to search in an array
 * @size: is the size of the array
 * @value: is the value to search for
 * Return: the index if the value exits otherwise minus one
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, index;

	if (array == NULL || size == 0)
		return (-1);

	low = array[0];
	high = array[size - 1];
	while (low <= high && value >= array[low] && value <= array[high])
	{
	index = low + (
		(value - array[low])/ (array[high] - array[low])) * (high - low);
	if (array[index] == value)
		return (value);
	else if (array[index] < value)
		low = index + 1;
	else
		high = index - 1;
	}
	return (-1);
}
