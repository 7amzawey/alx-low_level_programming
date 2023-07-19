#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = _abs(-1);
printf("%dn", r);
r = _abs(0);
printf("%dn", r);
r = _abs(1);
printf("%dn", r);
r = _abs(-98);
printf("%dn", r);
return (0);
}
