#include "hash_tables.h"

/**
 * shash_table_create - This creates a hash table that can be sorted into
 * a doubly linked list
 * @size: This is the size of the array to be created
 *
 * Return: The pointer to the newly created hash table, or NULL on failure
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	shash_node_t **new_array;
	unsigned long int a;

	if (size == 0)
		return (NULL);

	new_array = malloc(sizeof(shash_node_t *) * size);
	if (!new_array)
		return (NULL);

	for (a = 0; a < size; a++)
		new_array[i] = NULL;

	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = new_array;
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}


/**
 * shash_table_set - This adds an element to a hash table
 * sorted by alphabetic order of keys
 * @ht: sorted hash table to add or update the key/value
 * @key: key is string used for value lookup, cannot be empty string
 * @value: value associated with key, can be empty string
 *
 * Return: 1 on success, 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *temp;
	char *key_copy, *value_copy;

	if (!ht || !(ht->array) || key[0] == '\0' || key == NULL)
		return (0);
	value_copy = strdup(value);
	if (!value_copy)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
/* setting new value for existing key/node in array of SLLs */
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			if (temp->value)
			{
				free(temp->value);
				temp->value = NULL;
			}
			temp->value = value_copy;
			return (1);
		}
		temp = temp->next;
	}
/* key not found, setting new node. if collison, new node on top of list */
	key_copy = strdup(key);
	if (!key_copy)
		return (0);
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = key_copy;
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
/* now that node is placed in table, it can be sorted into the DLL */
	dbl_ll_set(ht, new);
	return (1);
}


/**
 * shash_table_get - This retrieves a value associated with a key in a sorted
 * hash table
 * @ht: table to search
 * @key: key used to find value
 *
 * Return: associated value, or NULL if key is not found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !(ht->array))
		return (NULL);

	if (!key || key[0] == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}


/**
 * shash_table_print - prints a sorted hash table from first to last in
 * sorted linked list
 * @ht: sorted hash table to be printed
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	bool first = true;

	if (ht && ht->array)
	{
		putchar('{');
		temp = ht->shead;
		while (temp)
		{
			if (first)
			{
				printf("'%s': '%s'", temp->key,
				       temp->value);
				first = false;
			}
			else
				printf(", '%s': '%s'", temp->key,
				       temp->value);
			temp = temp->snext;
		}
		printf("}\n");
	}
}


/**
 * shash_table_print_rev - sorted hash table from last to first
 * in sorted linked list
 * @ht: sorted hash table to be printed
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	bool first = true;

	if (ht && ht->array)
	{
		putchar('{');
		temp = ht->stail;
		while (temp)
		{
			if (first)
			{
				printf("'%s': '%s'", temp->key,
				       temp->value);
				first = false;
			}
			else
				printf(", '%s': '%s'", temp->key,
				       temp->value);
			temp = temp->sprev;
		}
		printf("}\n");
	}
}


/**
 * shash_table_delete - This deletes a sorted hash table
 * @ht: sorted hash table to have memory freed
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index, j;
	shash_node_t *head = NULL, *temp = NULL;

	if (ht && ht->array)
	{
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index])
			{
				head = ht->array[index];
				temp = head;
			}
			for (j = 0; head; j++)
			{
				temp = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = temp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
