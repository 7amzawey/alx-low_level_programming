#include "main.h"
/**
 * *_strncat - this function concatenate two stings
 * @dest: the first sting
 * @src: the second strin
 * @n: the size of the concatenated character
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
