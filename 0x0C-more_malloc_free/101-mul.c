#include "main.h"
#include <stdlib.h>
/*
/**
 * mul - will return the mul of two positive numbers
 * @num1: is the first number bab
 * @num2: is the 2nd number darling
 * Return: the result followed by a new line 
 * Error if they are not digits and exit 98
 */
int main(int argc, char **argv)
{
	if (argc < 2)
	{
	int mul;
	int num1 = *argv[0];
	int num2 = *argv [1];

	if (num1 > 0 && num2 > 0)
	{
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
