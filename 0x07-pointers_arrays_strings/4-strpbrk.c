#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of
 * bytes
 * @s: the string that will be scanned
 * @accept: the string that will be seen if any
 * letter matches with the scaned string
 * Return: the repeated characters
 */
char *_strpbrk(char *s, char *accept)
{
	char *p1 = s, *p2 = accept;

	while (*p1 != '\0')
	{
	for (p2 = accept; *p2 != '\0'; p2++)
	{
	if (*p1 == *p2)
	return (p1);
	}
	p1++;
	}
	return (NULL);
}
