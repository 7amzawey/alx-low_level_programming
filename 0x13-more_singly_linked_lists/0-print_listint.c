#include "lists.h"
/**
 * print_listint - prints all the elemts of a listint_t
 * @h: is apointer to the listint_t structure
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *ptr = h;

	if (ptr == NULL)
	{
		return ('\0');
	}
	else
	{
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		size++;
	}
	return (size);
	}
}
