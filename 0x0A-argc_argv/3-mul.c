#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two number
 * @argc: is the number of arguments
 * @argv: is the array of arrguments
 * Return: the multiple.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		product = i * j;
		printf("%d\n", product);
	}
	return (0);
}
