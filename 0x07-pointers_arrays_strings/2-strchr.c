#include "holberton.h"
/**
 *_strchr - function that locates a character in a string.
 * variable
 *@s: variable
 *@c: variable
 * Return: 0 sucess
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0' ; i++)
	{
		if (*(s + i) == c)
		{
			return (s + 1);
		}
	}
	return (0);
}
