#include "main.h"

/**
 * -memcpy - copies n byets from memorey area
 * src to memory area dest
 * @dest: is the one will receive the copy
 * @src: is the one we'll copy from
 * @n: the number of bytes copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
