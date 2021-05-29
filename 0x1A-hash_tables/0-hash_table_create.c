#include "hash_tables.h"
/**
 * @size: size of the table
 * hash_table_create - function that creates a hash table
 * Return: new table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{

        hash_table_t *new_table;

        if (size == 0)
                return (NULL);

        /* new table */
        new_table = malloc(sizeof(hash_table_t));

        if (new_table == NULL)
                return NULL;

        new_table->size = size;

        /* void *calloc(size_t, size_t); */
        new_table->array = calloc(size, sizeof(hash_node_t));

        if (new_table->array == NULL)
                return (NULL);

        return (new_table);
}