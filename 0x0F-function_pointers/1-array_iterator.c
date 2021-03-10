#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print array in Hexadecimal and Integer
 * @array: collection of elements of the type same
 * @size: size of the array
 * @action: name function pointer
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;

	while (i !< size)
	{
		action(array[i]);
		i++;
	}
}
