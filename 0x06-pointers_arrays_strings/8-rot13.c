#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: pointer to s
 **/
char *rot13(char *s)
{
	int i, j;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = cod[j];
				break;
			}
		}
		j = 0;
	}
	return (s);
}
