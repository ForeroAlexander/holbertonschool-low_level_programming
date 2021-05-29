#include "hash_tables.h"
/**
 * hash_djb2 - dj function
 * @str: growing up string
 * Return: index position
 */

unsigned long int hash_djb2(const unsigned char *str)
{
        unsigned long int hash = 5381;
        int c;

        while ((c = *str++))
        {
                hash = ((hash << 5) + hash) + c; /* HASH * 33 + C */
        }
        return (hash);
}
