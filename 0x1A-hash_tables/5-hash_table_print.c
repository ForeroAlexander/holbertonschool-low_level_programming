#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0, isOn = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		while (ht->array[index])
		{
			if (isOn == 0)
				isOn = 1;
			else
				printf(", ");

			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			ht->array[index] = ht->array[index]->next;
		}
		index++;
	}
	printf("}\n");
}
