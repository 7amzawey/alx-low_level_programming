#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate the minimum number of conins need
 * to make change for a given amount of money
 * @argc: the number of arguments
 * @argv: the array of strings that represents args
 * Return: the change
 */
int main(int argc, char *argv[])
{
	int n;
	int sum;
	int su;
	int s;
	int l;
	int f;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
	sum = (((((n % 5) % 10) % 5) % 2));
	su = (((n % 25) % 10) % 5) / 2;
	s = ((n % 25) % 10) / 5;
	l = (n % 25) / 10;
	f = (n / 25);
printf("%d\n", (f + l + s + su + sum));

	}
	return (0);
}
