#include "lists.h"
/**
 * *add_nodeint - this funciton adds a new node at the
 * beginning of a listint_t list
 * @head: is a pointer to a pointer to the structre
 * @n: is the number that will be added to the first
 * node
 * Return: the address of the new element or null if
 * it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node = malloc(sizeof(listint_t));
	first_node->next = NULL;
	first_node->n = n;

	first_node->next = *head;
	*head = first_node;
	if (first_node == NULL)
		return (NULL);
	else
	{
	return (first_node);
	}
}
