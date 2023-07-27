#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 * @s: the arrays of characters
 * Return: capital words
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
char separators[] = " \t\n,;.!?\"(){}";

if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
while (s[i] != '\0')
{
for (j = 0; separators[j] != '\0'; j++)
{
if (s[i] == separators[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] -= 32;
}
i++;
}
return (s);
}
