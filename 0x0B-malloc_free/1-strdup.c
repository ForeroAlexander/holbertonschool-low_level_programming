#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer duplicate of the string
 * @str: string to duplicate
 *
 * Return: pointer to the copy (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *j;
	unsigned int a = 0, b = 0;
	if (str == 0)
	{
		return (0);
	}
	while (str[b])
	{
		b++;
	}
	/*j = malloc(sizeof(char) * str);*/
	j = malloc(sizeof(char) * (b + 1));
	if (j == 0)
	{
		return (0);
	}
	while ((j[a] = str[a]) != '\0')
	{
		a++;
	}
	return (j);
}
