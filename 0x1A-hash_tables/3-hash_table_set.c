#include "hash_tables.h"

/**
 * hash_table_set - adds a element to the hash table
 * @ht:the hash table you want to add
 * @key: the key, cannot be empty
 * @value: the value associated with the key
 * Return: 1 in success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *actual, *element;
	unsigned long int a;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	a = key_index((const unsigned char *)key, ht->size);
	actual = ht->array[a];
	while (actual)
	{
		if (strcmp(actual->key, key) == 0)
		{
			free(actual->value);
			actual->value = strdup(value);
			if (actual->value == NULL)
				return (0);
			return (1);
		}
		actual = actual->next;
	}
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	if (element->key == NULL  || element->value == NULL)
		return (0);
	element->next = ht->array[a];
	ht->array[a] = element;
	return (1);
}
