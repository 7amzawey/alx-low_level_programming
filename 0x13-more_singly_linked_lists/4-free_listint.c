#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: is a pointer to a structure list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
