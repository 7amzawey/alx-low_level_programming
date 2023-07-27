#include "main.h"
/**
 * *rot13 - is a function that encodes a string using rot 13
 * @s: is an array of chars
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i = 0;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		char output[] = "NOPQRSTUVWXYZABCDEFGHIGKLMnopqrstuvwxyzabcdefghigklm";
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
		if (s[i] == input[j])
		{
		s[i] = output[j];
		break;
		}
		}
		i++;
	}
	return (s);
}
