#include "main.h"
/**
 * *_strncpy - this function copies a string
 * @dest: one of the strings
 * @src: is the second string
 * @n: is the length of the string
 * Return: will return the copied function
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if(i < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
