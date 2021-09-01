#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of integers
* @array: Pointer to first element of the array
* @size: Number of elements in the array
* @value: Value to search
* Return: The index found or -1 if failed
*/

int linear_search(int *array, size_t size, int value)
{

	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i <= size - 1; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
