#include "lists.h"
/**
 * listint_len - returns the number of elements in
 * linked listint_t list
 * @h: is a pointer to the structure
 * Return: the size of this function.
 */
size_t listint_len(const listint_t *h)
{
size_t size = 0;

while (h != NULL)
{
	h = h->next;
	size++;
}
return (size);
}
