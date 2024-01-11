#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: the header NOde
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

