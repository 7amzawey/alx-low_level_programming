#include "lists.h"
/**
 * *find_listint_loop - this function finds the loop in
 * you code mate
 * @head: is the head node of the linked list
 * Return: the address of the function or NULL if there
 * is no lope darling
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		return (slow);
	}
	return (NULL);
}
