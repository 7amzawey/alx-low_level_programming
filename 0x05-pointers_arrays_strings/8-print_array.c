#include "main.h"
#include <stdio.h>
/**
 * print_array - it prints the array elments
 * @a: is the pointer
 * @n: is the number of the elements
 * Return: the array elements
 */
void print_array(int *a, int n)
{
	int i = *a;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

}

