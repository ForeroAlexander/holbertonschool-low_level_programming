#include "holberton.h"
/**
 * leet - encodes a string into 1337..
 * @s: string to encode
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i;
	int j;
	char cod[] = "aAeEoOtTlL";
	char cod_n[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; cod[j] != '\0'; j++)
		{
			if (s[i] == cod[j])
			{
				s[i] = cod_n[j];
			}
		}
	}
	return (s);
}
