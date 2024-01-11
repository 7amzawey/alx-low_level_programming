#include "lists.h"
/**
 * *get_dnodeint_at_index - returns th nth node at a linked list
 * @head: is the header node.
 * @index: is the index of the node starting from 0.
 * Return: the node or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	while (head)
	{
		head = head->next;
		i++;
		if (i == index)
		{
			return (head);
		}
		
	}
	return (NULL);
}	
