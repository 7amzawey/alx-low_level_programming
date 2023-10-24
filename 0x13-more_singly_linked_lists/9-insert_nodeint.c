#include "lists.h"
/**
 * *insert_nodeint_at_index - it insterts a node at a
 * given position.
 * @head: is the head node of the linked list.
 * @idx: is the position that i will be inserting the
 * node in
 * @n: is the int that will be added.
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	current = *head;

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			ptr->next = current->next;
			current->next = ptr;
			return (ptr);
		}
		i++;
		current = current->next;
	}
	free(ptr);
	return (NULL);
}
