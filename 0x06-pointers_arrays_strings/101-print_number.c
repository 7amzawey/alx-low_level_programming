#include "main.h"
/**
 * void print_number - prints an integer
 * @n: is the integer 
 * Return: the printed integer
 */
void print_number(int n)
{	int count = 0;

	while( n % 10 == 0 && n != 0)
	{
		count++;
		n /= 10;

	}

