#include "hash_tables.h"
/**
 * *hash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table.
 * @key: is the key you are looking for.
 * Return: the Value associated with the element
 * or NULL if key could not be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	int result;
	if (!ht || !key)
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current_node = ht->array[i];

		while (current_node != NULL)
		{
			result = strcmp(current_node->key, key);
			if (result == 0)
				return (current_node->value);
			current_node = current_node->next;
		}
	}
	return (NULL);
}
