#include "lists.h"
/**
 * *add_dnodeint - adds a node at the begining of a list
 * @head: is the header node
 * @n: is the n
 * Return: the address of the new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL || head == NULL)
	{
		free(temp);
		return (NULL);
	}
	if (!*head)
	{
		*head = temp;
		temp->next = NULL;
	}
	else
	{
	temp->next = *head;
	(*head)->prev = temp;
	temp->n = n;
	*head = temp;
	}
	return (temp);
}
