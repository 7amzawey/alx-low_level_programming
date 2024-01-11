#include "lists.h"
/**
 * size_t print_dlistint - writes a functions that prints all elements of
 * a list
 * @h: this is the header node
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
