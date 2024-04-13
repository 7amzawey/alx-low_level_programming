#include "hash_tables.c"
/**
 * hash_table_create - creates a new table.
 * @size: size of array.
 * Return: pointer to the newly created list
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		free(table);
		return (NULL);

	for (int i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
