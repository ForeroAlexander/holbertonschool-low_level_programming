#include "holberton.h"
#include<stdio.h>

/**
 *length - Entry point
 *@dest: pointer
 *Return: length (sucess)
 */
int length(char *dest)
{
	return ((*dest != '\0') ? 1 + length(dest + 1) : 0);
}
/**
 *_strncat - Entry point
 *@dest: pointer
 *@src: pointer
 *@n: variab
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
