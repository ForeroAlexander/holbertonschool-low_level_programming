#include "holberton.h"

int _strlen(char *s)
{

	int length = 0;

	while (*s != '\0')
	{
		length++;
		s = s + 1;
	}

	return (length);
}
