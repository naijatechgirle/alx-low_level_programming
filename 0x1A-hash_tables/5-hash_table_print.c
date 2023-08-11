#include "hash_tables.h"

/**
 * hash_table_print - This prints a hash table
 * @ht: hash table
 * Return: nothing to  return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int a = 0;
	int flag = 1;
	hash_node_t *actual = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a])
		{
			actual = ht->array[a];
			while (actual != NULL)
			{
				flag == 0 ? printf(", ") : flag;
				printf("'%s': '%s'", actual->key, actual->value);
				flag = 0;
				actual = actual->next;
			}
		}
	}
	printf("}\n");
}
