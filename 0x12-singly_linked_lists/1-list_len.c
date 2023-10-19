#include "lists.h"
/**
 * list_len - this function returns the function
 * lenght
 * @h: is a pointer to a structure
 * Return: the numbe of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
