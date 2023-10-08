#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block using
 * malloc and free
 * @ptr: is pointer to the memory previously
 * allocated a call to malloc(old_size);
 * @old_size: is the old size
 * @new_size: is the new size
 * Return: the ptr starting from ptr to the size of
 * old_size or new_size whichever is new memory
 * ptr if new-size equal to old size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int i;

	if (new_size > old_size)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
		return (NULL);
		for (i = 0; i < old_size; i++)
		{
			ptr2[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (ptr2);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
		return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr2);
}
