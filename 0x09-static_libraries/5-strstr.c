#include "holberton.h"

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
