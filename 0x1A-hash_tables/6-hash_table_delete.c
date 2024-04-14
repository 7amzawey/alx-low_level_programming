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

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current_node = ht->array[i];
		
		while (current_node)
		{
			hash_node_t *prev = current_node;
			current_node = current_node->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
