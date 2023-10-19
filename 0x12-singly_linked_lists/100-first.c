#include "lists.h"
/**
 * __attribute__ - do before execeuation.
 * before_main - prints a specific message before
 * excecuation
 * Return: void
 */
void __attribute__((constructor))
befor_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
