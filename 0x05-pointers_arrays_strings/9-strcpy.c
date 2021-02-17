#include <stdio.h>
#include <string.h>

int _strlen(char *s);

/**
 * *_strcpy - Function
 * @dest: parameter
 * @src: parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int longitud = _strlen(src);

	while (i <= longitud)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _strlen - Function returns the length of a string
 * @s: parameter
 * Return: i
 */

int _strlen(char *s)
{
	int i = 1;

	if (s[0] == '\0')
	{
		i = 0;
	}
	else
	{
		while (s[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}
