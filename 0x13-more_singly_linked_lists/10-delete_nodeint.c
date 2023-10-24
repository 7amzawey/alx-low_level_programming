#include "lists.h"
/**
 * delete_nodeint_at_index - delets the node at index
 * @head: the head node of the linked list
 * @index: is the index that the node will be deleted
 * at
 * Return: 1 if successeded -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *current = *head;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	while (current)
	{
		if (i == index)
		{
			temp = current->next;
			free(current);
			prev->next = temp;
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (index >= i)
	{
		return (-1);
	}
	return (-1);
}
