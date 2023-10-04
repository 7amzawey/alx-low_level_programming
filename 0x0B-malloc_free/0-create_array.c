#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creats an array of chars and
 * intializes it with a special char
 * @size: is the size of the array
 * @c: is the special char
 * Return: a pointer to the array, or NULL if it fail
 * NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *arr;

	arr = malloc(sizeof(char) * size);


	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
		return (NULL);
	return (arr);
}
