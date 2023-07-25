#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int i = *a;
	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i < n)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

}

