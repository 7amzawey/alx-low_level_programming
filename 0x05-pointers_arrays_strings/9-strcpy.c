#include "main.h"
/**
 * *_strcpy - copy a string from one pointer to another
 * @dest: which is the first pointer
 * @src: which is the second pointer
 * Return: returns the printed pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
			{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
