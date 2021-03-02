#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - funcion
 *
 *
 * @size: variable
 * Return: s always
 * @c: variable
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}

	return (s);
}
