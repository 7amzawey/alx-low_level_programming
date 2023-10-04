#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - it concatents two strings
 * @s1: is the first string
 * @s2: is the 2nd string
 * Return: NULL on failue
 * note if NULL is passed treat it as an empty string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int size1 = 0;
	int size2 = 0;
	char *s3;

	while (*s1++)
	{
		size1++;
	}
	while (*s2++)
	{
		size2++;
	}
	s3 = malloc(sizeof(char) * (size1 + size2 + 1));
	if (s3 == NULL)
	return (NULL);
	for (i = 0; i < size1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < size2; j++, i++)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}
