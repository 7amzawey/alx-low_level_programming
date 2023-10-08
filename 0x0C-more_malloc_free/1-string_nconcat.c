#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: is the first string
 * @s2: is the 2nd string
 * @n: the number of chars that will be concatenated 
 * from s2
 * Return: NULL if fails
 * if null passed treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{	int size = 0;
	int i;
	unsigned int j;
	unsigned int len2 = 0;

	if(s1 == NULL)
	{
		s1 = "";
	}
	if(s2 == NULL)
	{
		s2 = "";
	}

	while(s1[size])
	{
		size++;
	}
	while(s2[size] && len2 < n)
	{
		len2++;
	}
	char *ptr = malloc(sizeof(char) * (size + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0;i < size; i++)
	{
	ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
	ptr[j + i] = s2[j];
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr[j + i] = '\0';
	return (ptr);
}	
