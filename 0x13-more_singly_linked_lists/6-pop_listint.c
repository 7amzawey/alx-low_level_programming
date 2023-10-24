#include "lists.h"
/**
 * pop_listint - this function delets the head node of
 * a listint_t linked list and returns the head node's
 * data(n)
 * @head: is the head node.
 * Return: the head node's data and 0 if the list is
 * empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
