#include "hash_tables.h"
/**
 * hash_table_set - this function adds a new element to the hash table.
 * @ht: is the table.
 * @key: is the key and it can not be empty.
 * @value: is the value associated with the key && it must be duplicated.
 * Return: 0 if failed and 1 if successed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x;
	hash_node_t *new_node, *node;

	if (!key || !ht || !value)
		return (0);
	x = key_index((const unsigned char *)key, ht->size);
	node = ht->array[x];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);
	new_node->key = strdup(key);

	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[x];
	ht->array[x] = new_node;
	return (1);
}
