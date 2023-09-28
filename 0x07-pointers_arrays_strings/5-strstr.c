#include "main.h"
/**
 * *_strstr - that function locates a substring
 * @haystack: is the one that that substring is in
 * @needle: is the one that will be searching for
 * matching substring with haystack
 * Return: apointer to the beginning of the located
 * substing
 */

char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *q;
	int i;

	for (i = 0; haystack[i]; i++)
	{
		p = &haystack[i];
		q = needle;

		while (*p && *q && *p == *q)
		{
			p++;
			q++;
		}
		if (!*q)
			return (&haystack[i]);
	}
	return (0);
}
