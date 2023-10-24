#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: is the head node for the linked list
 * Return: the number of the nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	if (head == NULL)
	{
		exit(98);
	}
	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		size++;
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (size);
		}
	}
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		size++;
		slow = slow->next;
	}
	return (size);

}
