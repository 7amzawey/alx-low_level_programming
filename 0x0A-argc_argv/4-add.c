#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds postive numbers
 * @argc: is the number of arguments
 * @argv: is the array of arrguments
 * Return: 0 if no number passed to the programme
 * if not digit print Error followed by a new line
 * and return 1
 * the addition if the conditions provided.
 */
int main(int argc, char *argv[])
{
	int i;

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg)
		{
			if (!isdigit(*arg))
		{
			printf("Error\n");
			return (1);
		}
			arg++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
