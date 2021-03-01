#include "holberton.h"
#include<stdio.h>

/**
 *length - point
 *@dest: pointer
 *Return: length (sucess)
 */
int length(char *dest)
{
	return ((*dest != '\0') ? 1 + length(dest + 1) : 0);
}
/**
 *_strcat - Entry point
 *@dest: pointer
 *@src: pointer
 *Return: always 0 (sucess)
 */
char *_strcat(char *dest, char *src)
{
	char *zero_itter = dest + length(dest);

	while (*src != '\0')
	{
		*zero_itter = *src;
		src = src + 1;
		zero_itter = zero_itter + 1;
	}
	*zero_itter = *src;

	return (dest);
}
