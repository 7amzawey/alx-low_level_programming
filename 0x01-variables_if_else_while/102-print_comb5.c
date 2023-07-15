#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int i;
int j;
int k;
int o;
for (i = 0; i < 10; i++)
{
for (j = i ; j < 10; j++)
{
for (k = 0; k < 10; k++)
{
for (o = k + 1; o < 10; o++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(o + '0');
if (!(i == 9 && j == 8 && k == 9 && o == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
