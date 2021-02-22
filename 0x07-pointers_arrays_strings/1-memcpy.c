#include "holberton.h"
/**
 *_memcpy - function that fills memory with a constant byte
 *@dest: variable
 *@src: variable
 *@n: variable
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + 1) = *(src + 1);

	return (dest);
}
