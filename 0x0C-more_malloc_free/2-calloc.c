#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates a memory for an array
 * @nmemb: is the the array
 * @size: is the size of the array
 * Return: 0 if any argument is and NULL afterwords
 * if it fails it will return NULL as well
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
