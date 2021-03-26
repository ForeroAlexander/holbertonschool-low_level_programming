#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index.
 *@n: unsigned long int
 *@index: unsigned int
 *
 *Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_value;

	if (index > sizeof(n) * 8)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
