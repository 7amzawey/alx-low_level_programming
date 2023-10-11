#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: the array that its elements will be
 * executed upon the function given
 * @size: the size of the array
 * @action: is the function that will be executed on
 * each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
