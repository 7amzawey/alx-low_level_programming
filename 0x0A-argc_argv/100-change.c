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


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int n = atoi(argv[1]);
	int sum = (((((n % 5) % 10) % 5) % 2));
	int su = (((n % 25) % 10) % 5) / 2;
	int s = ((n % 25) % 10) / 5;
	int l = (n % 25) / 10;
	int f = (n / 25);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
printf("%d\n", (f + l + s + su + sum));

	}
	return (0);
}
