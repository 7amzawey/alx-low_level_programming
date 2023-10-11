#include "function_pointers.h"
/**
 * print_name - this func prints a name
 * @name: is the name my dear
 * @f: and this is the pointer to a function that
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
