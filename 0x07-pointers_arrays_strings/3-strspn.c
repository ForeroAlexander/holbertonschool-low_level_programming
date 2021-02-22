#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: c
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	c = 0; /*c is the number of characters compared*/

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
		if (accept[b] != s[a])
		{
			break;
		}
	}
	return (c);
}
