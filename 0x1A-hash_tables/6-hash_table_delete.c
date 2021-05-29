#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int index = 0;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		while (ht->array[index])
		{
			tmp = ht->array[index];
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			ht->array[index] = ht->array[index]->next;
		}

		index++;
	}

	free(ht->array);
	free(ht);
}
