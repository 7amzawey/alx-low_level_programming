#include "main.h"
#include <stdio.h>
/**
 * *_strcat - appends the src string to the dest string
 * @dest: the first string
 * @src: the pointer of the second one
 * Return: the concatenated one
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
