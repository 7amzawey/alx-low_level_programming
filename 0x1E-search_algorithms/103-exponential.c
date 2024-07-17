#include "search_algos.h"
/**
 * exponential_search - is the a function taht searches for a value
 * using the exponential search algorithm
 * @array: is the array
 * @size: is the size of the array
 * @value: is the value to be found
 * Return: the index of the value location
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, right, left;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
	printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	bound *= 2;
	}
	left = bound / 2;
	right = bound < size ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	result = binary_search(array + left, right - left + 1, value);
	if (result != -1)
		return (result + left);
	return (-1);
}
