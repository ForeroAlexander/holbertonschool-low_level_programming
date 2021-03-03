#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *j;
	unsigned int a = 0, b = 0, k;
	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	k = a + b;
	j = malloc(sizeof(char) * (k + 1));
	if (j == 0)
	{
		return (0);
	}
	for (a = 0; s1[a]; a++)
	{
		j[a] = s1[a];
	}
	for (b = 0; s2[b]; a++, b++)
	{
		j[a] = s2[b];
	}
	j[a] = '\0';
	return (j);
}
