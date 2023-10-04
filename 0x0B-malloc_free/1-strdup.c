#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - it returns a pointer to a newly
 * allocated space in memory. which contains a copy
 * of the string given as a parameter
 * @str: is the pointer
 * Return: Null if str = NULL on success it returns
 * to the duplicated string.it returns NULL.if
 * insufficient memory was available
 */
char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *arr;
	char *start = str;

	if (str == NULL)
	return (NULL);

	while (*str++)
	{
		size++;
	}
	arr = malloc(sizeof(char) * (size + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = start[i];
	}
		arr[size] = '\0';
	return (arr);
}
