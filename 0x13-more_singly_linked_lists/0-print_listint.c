#include "lists.h"
/**
 * print_listint - prints all the elemts of a listint_t
 * @h: is apointer to the listint_t structure
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}