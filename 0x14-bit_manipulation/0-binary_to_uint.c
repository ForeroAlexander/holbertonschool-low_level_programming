#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: const char variable
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, y = 1;
	int i;

	if (b == '\0')
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		x += (b[i] - '0') * y;
		y *= 2;
	}
	return (x);

}
