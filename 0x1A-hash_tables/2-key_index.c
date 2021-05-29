#include "hash_tables.h"
/**
 * key_index -returns the index of a specified key
 * 
 * @key: key to search
 * @size: size of hash_table_t
 * Return: returns the hashed index 
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

        return (hash_djb2((unsigned char *)key) % size);

}
