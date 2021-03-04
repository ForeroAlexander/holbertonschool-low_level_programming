#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: min value for the integers
 *@max: max value for the integers
 *
 *Return: NULL if @min > @max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i = min;

	if (min > max)
		return (NULL);
	ptr = malloc((unsigned int)((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (i <= max)
	{
		ptr[i - min] = i;
		i++;
	}
	return (ptr);
}
