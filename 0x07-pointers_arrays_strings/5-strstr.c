#include "holberton.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: original string
 * @needle: checker
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	i = 0;

	while (haystack[i])
	{
		while (*(haystack + i) && *(needle + i) && haystack[i] == needle[i])
		{
			i++;
		}

		if (!needle[i])
		{
			return (haystack);
		}

		haystack++;
	}
	return ('\0');
}
