#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: one of the swaped integers
 * @b: the other swaped integer
 *
 */
void swap_int(int *a, int *b)
{int p;
	p = *a;
	*a = *b;
	*b = p;
}
