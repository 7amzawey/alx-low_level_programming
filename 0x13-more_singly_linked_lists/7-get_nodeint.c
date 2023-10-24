#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a
 * linked list
 * @head: is the head node of the struct
 * @index: is the index of the node that will be
 * returned
 * Return: the node if it deos exist NULL if its not.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
	if (i == index)
	{
		return (ptr);
	}
	i++;
	ptr = ptr->next;
	}
	if (index > i)
	{
		return (NULL);
	}
	return (0);
}
