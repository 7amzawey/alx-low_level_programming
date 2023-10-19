#include "lists.h"
/**
 * *add_node - that function adds a new node at the
 * begining of a list_t list
 * @head: the firs node of the structure
 * @str: is the string of the sturcture
 * Return: the address of the new element or NULL if
 * it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	int len = 0;

	first = malloc(sizeof(list_t));
	if (first == NULL)
	{
		return (NULL);
	}
	first->str = strdup(str);

	if (first->str == NULL)
	{
		free(first);
		return (NULL);
	}
	while (str[len])
		len++;
	first->len = len;
	first->next = *head;
	*head = first;
	return (first);
}
