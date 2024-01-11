#include "lists.h"
/**
 * *add_dnodeint_end - write a function that adds a new node at end
 * @head: is the header node
 * @n: is the number
 * Return: the address of the new eleemnt or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!head || !new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	temp = *head;

	if (!*head)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
