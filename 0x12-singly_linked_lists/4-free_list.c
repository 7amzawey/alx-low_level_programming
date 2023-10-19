#include "lists.h"
/**
 * free_list - this function frees a list_t list
 * @head: the header node of the structure
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
