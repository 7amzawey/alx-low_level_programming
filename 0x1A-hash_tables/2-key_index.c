#include "hash_tables.h"
/**
 * key_index - that function gives you the index of a key.
 * @key: is the key.
 * @size: is the size of the array of the hash table.
 * Return: the index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x = hash_djb2(key);
	unsigned long int i = x % size;

	return (i);
}
