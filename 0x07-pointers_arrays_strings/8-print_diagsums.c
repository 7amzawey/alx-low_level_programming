#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - prints the sum of the two
 * diagonals of square matrix of integers
 * @a: is the array
 * @size: is the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
		sum1 = sum1 + a[i * size + (size - i - 1)];
	}
	printf("%d", sum);
	putchar(',');
	putchar(' ');
	printf("%d", sum1);
	putchar('\n');
}
