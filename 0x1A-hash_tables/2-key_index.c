#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: where key is the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0 || key == NULL)
		return (0);

	hash = (hash_djb2(key) % size);

	return (hash);
}
