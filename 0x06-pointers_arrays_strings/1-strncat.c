#include "holberton.h"
#include<stdio.h>

/**
 *length - Entry point
 *@dest: pointer
 *return: length (sucess)
 */
int length(char *dest)
{
	return ((*dest != '\0') ? 1 + length(dest +1) : 0);
}
/**
 *_strcat - Entry point
 *@dest: pointer
 *@src: pointer
 *Return: always 0 (sucess)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	const unsigned int log = length(dest);

	for (i = 0; i < n; i++)
		*(dest + i + log) = *(src + i);

	return (dest);
}
