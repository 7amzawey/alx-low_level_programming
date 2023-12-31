#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - this function concatenates all the
 * arguments of your program
 * @ac: the arguments number
 * @av: the array of arguments
 * Return: the arguments one per line
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int len = 0;
	char *str;

	if (ac == 0 ||  av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';

	}
	str[k] = '\0';
	return (str);
}
