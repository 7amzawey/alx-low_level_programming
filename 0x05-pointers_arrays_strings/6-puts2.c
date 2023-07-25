#include "main.h"
/**
 * puts2 - writeAFaunctionThatPrintsEveryOtherCharacte
 * @str: this is the string pointer
 * Return: the wanted numbers that is a stupid Q
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');

}
