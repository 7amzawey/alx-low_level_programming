#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed;

	if (ht == NULL)
		return;

	printf("{");

		for (i = 0; i < ht->size; i++)
		{
			hash_node_t *current_node = ht->array[i];

			while (current_node != NULL)
			{
				if (printed == 1)
					printf(", ");

				printf("'%s': '%s'", current_node->key, current_node->value);
				printed = 1;
				current_node = current_node->next;
			}
		}
	printf("}\n");
}
