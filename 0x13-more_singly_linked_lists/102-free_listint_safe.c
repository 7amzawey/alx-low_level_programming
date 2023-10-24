#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list with a
 * loop
 * @h: this function sets the head to NULL
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *slow = *h;
	listint_t *fast = *h;
	listint_t *temp;

	if (*h == NULL)
	{
		return (0);
	}
	while (slow && fast->next && fast)
	{
		size++;
		temp = slow;
		slow = slow->next;
		fast = fast->next->next;
		free(temp);

		if (slow == fast)
		{
			*h = NULL;
			return (size);
		}
	}
	while (slow != NULL)
	{
		size++;
		temp = slow;
		slow = slow->next;
		free(temp);
	}
	*h = NULL;
	return (size);
}
