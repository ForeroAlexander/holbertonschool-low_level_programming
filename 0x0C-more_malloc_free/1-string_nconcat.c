#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: pointer to the first string
 *@s2: pointer to the second string
 *@n: number of bytes used fron second string
 *
 *Return: NULL if malloc fails allocating memory
 *        ptr pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] || s2[len2])
	{
		if (s1[len1])
			len1++;
		if (s2[len2])
			len2++;
	}
	len1++;
	if (n >= len2)
		n = len2;
	ptr = malloc((len1 + n) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (; i - len1 + 1 < n && s2[i - len1 + 1]; i++)
		ptr[i] = s2[i - len1 + 1];
	ptr[i] = '\0';

	return (ptr);
}
