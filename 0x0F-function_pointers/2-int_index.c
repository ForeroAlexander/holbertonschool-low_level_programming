#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - compare a value an array and return your index
 * @array: array of a integer
 * @size: size of the array
 * @cmp: name function pointer
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	i = 0;
	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
