#include "main.h"
/**
 * print_alphabet_x10 - print the alphapet 10 times followed by a new line
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{int i;
int c;	
	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
		return;
}
