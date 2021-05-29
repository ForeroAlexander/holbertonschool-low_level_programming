#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new == NULL)
		return (NULL);

	new->size = size;

	return (new);
}
