#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: is the size.
 * returns a pointer to allocated
 * memory
 * if malloc fails it causes a mormal proccess
 * termination with a status value of 98
 * Return: the pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
