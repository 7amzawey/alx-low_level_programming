#include "lists.h"
/**
 * *insert_dnodeint_at_index - that function inserts a new node at a index
 * @h: is the address of the header node.
 * @idx: is the index of this node
 * @n: is the number in this node.
 * Return: the address of the new node or NULL in failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *head = *h;

	if (!h || !new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	for (i = 0; i < idx - 1 && head != NULL; i++)
	{
		head = head->next;
	}

		if (head == NULL)
		{
			free(new);
			return (NULL);
		}
			new->prev = head;
			new->next = head->next;
			if (head->next != NULL)
				head->next->prev = new;
			head->next = new;

		head = head->next;
	return (new);
}
