#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: The number.
 * @m: The number to flip to.
 *
 * Return: number of bits to flip from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ntom = n ^ m, num_bits = 0;

	while (ntom > 0)
	{
		num_bits += (ntom & 1);
		ntom >>= 1;
	}

	return (num_bits);
}
