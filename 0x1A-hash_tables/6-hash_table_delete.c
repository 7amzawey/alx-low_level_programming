#include "hash_tables.h"
/**
 * hash_table_delete - this function deletes a hash table.
 * @ht: is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	if (!ht)
		return;

	unsigned long int i;
	hash_node_t *tmp, *node;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			tmp = node->next;

			free(node->key);
			free(node->value);
			free(node);

			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
