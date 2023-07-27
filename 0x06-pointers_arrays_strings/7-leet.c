#include "main.h"
/**
 * char *leet - ecodes a string into 1337
 * @s: the array of characters
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char a[] = "aAeEoOtTlL";
	char b[] = "43071";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
			s[i] = b[j / 2];
			}
		}
		i++;
	}

		return (s);
}
