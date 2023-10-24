#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a
 * listint_t linked list
 * @head: the head node of the linked list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;

	int sum = 0;

	if (ptr == NULL)
	{
		return ('\0');
	}
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
