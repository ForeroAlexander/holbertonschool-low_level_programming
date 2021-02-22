#include "holberton.h"
/**
 *_memset - function that fills memory with a constant byte
 *@s: variable
 *@b: variable
 *@n: variable
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + 1) = b;

	return (s);
}
