#include "lists.h"
/**
 * free_dlistint - this function frees a list
 * @head: is the headaer node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
