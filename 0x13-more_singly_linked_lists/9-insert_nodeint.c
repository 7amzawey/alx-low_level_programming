#include "lists.h"
/**
 * *insert_nodeit_at_index - it insterts a node at a
 * given position.
 * @head: is the head node of the linked list.
 * @idx: is the position that i will be inserting the
 * node in
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->n = n;

	while (*head != NULL)
	{
		if (idx == i)
		{
			ptr->next = *head;
			*head = ptr;
		}
		i++;		
		*head = (*head)->next;
	}
	if (idx > i)
	{
		return (NULL);
	}
	return (ptr);
}
