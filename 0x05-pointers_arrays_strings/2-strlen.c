#include "holberton.h"
#include <stdio.h>
/**
 * int _strlen function that returns the length of a string
 *@s: pointer
 * Return: int
 */
int _strlen(char *s)
{
	int length = 0;

	while(*s != '\0')
	{
		length++;
		s = s + 1;
	}

	return (length);
}
