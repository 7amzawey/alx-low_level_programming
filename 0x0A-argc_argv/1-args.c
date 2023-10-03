#include <stdio.h>
/**
 * main - prints the number of arguments passed into
 * @argc: the number of arguments
 * @argv: the arrary of arguments
 * Return: the number of args..
 */
int main(int argc, char *argv[])
{
	(void)argv;

printf("%d\n", argc - 1);
return (0);
}
