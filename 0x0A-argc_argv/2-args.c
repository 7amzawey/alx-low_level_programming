#include <stdio.h>
/**
 * main - prints all the arguments it receives.
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: every single argument including the first
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
