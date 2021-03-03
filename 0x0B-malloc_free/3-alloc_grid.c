#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **arrstr;

	if (height <= 0 || width <= 0)
		return (NULL);

	arrstr = (int **) malloc(sizeof(int *) * height);

	if (arrstr == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		arrstr[h] = (int *) malloc(sizeof(int) * width);
		if (arrstr[h] == NULL)
		{
			free(arrstr);
			for (w = 0; w <= h; w++)
				free(arrstr[w]);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			arrstr[h][w] = 0;
		}
	}
	return (arrstr);
}
