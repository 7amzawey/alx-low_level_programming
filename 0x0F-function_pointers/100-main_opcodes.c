#include "3-calc.h"
/**
 * main - writes a program that prints the
 * opcodes of its own main function.
 * @argc: the number of agruments
 * @argv: the ptr to the arguments
 * Return: the opcodes of its own main func
 */
int main(int argc, char *argv[])
{
	int size;
	int i;
	unsigned char *ptr = (unsigned char *)&main;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	size = atoi(argv[1]);
	if (size <= 0)
	{
	printf("Error\n");
	exit(2);
	}
	for (i = 0; i < size; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
	return (0);
}
