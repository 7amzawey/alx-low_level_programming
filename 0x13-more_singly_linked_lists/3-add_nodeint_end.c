#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of
 * a listint_t list
 * @head: is a pointer to a pointer to a structure list
 * @n: is the element of the end list
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end_node = malloc(sizeof(listint_t));

	listint_t *last;

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = end_node;
	return (end_node);
}
