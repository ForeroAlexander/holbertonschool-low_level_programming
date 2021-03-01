#include "holberton.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;
	char *s = src;

	for (i = 0; i < n; i++)
	{
		*d++ = *s++;
	}
	return (dest);
}
