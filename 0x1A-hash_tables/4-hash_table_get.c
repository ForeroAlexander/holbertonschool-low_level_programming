#include "hash_tables.h"
/**
 * hash_table_get -retrives a value associated with a key
 *  @ht: hash table you want to llok into  
 * @key: key you are looking for in the hash table
 * Return: the value associated element or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned int index;
    hash_node_t *node;

    if (!key || !ht || !ht->array)
        return (0);
    /* return key string "c" */
    index = key_index(unsigned char *key ht->size);
    /*node is point to the table in index position */
    node = ht->array[index];
    /* will go through to th end linked list*/
    while (node != NULL)
    {
        /*compare value and if it's the same return value */
        if (strcmp(node->key, key) == 0)
        {
            /* return value of the key */
            return (node->value);
        }
        /* next node */
        node = node->next;
    }
    return (NULL);
}
