#include "lists.h"
/**
 * *add_node_end - writes a function that adds a new
 * node at the end of a list_t list.
 * @head: is the structure header node
 * @str: is the new one that will be added in the end
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	size_t len;
	list_t *ptr;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
		*head = end_node;
	else
	{
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
		ptr->next = end_node;
	}
	end_node->next = NULL;
	end_node->str = strdup(str);
	while (str[len])
		len++;
	end_node->len = len;
	return (end_node);
}
