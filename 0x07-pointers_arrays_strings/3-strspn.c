#include "main.h"
/**
 * _strspn - returns the number of bytes in the
 * intial segement of s which consist only of
 * bytes from accept
 * @s: consist only of byets from accept
 * @accept: is the string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{

		if (s[i] == accept[j])
		{
			break;
		}

		}
		if (!accept[j])
			break;
	}
	return (i);

}
