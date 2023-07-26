#include "main.h"
/**
 * reverse_array - it will reverse the array elments
 * @a: is the is the array
 * @n: is the number of the array elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
