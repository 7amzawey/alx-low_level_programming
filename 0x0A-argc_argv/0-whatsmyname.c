#include <stdio.h>

/**
 * main - the entry point
 * @argc: the count of strings
 * @argv: the array of strings
 * Return: the name
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
