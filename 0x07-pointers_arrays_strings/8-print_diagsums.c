#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - function that prints the sum of the two diagonals
 *@a: array to be printed
 *@size:of a
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, non = 0;

	for (i = 0; i < size; i++)
		non += *(a + i * size + i);
	printf("%i, ", non);
	non = 0;
	for (j = 0; j < size; j++)
		non += *(a + size * (j + 1) - (j + 1));
	printf("%i\n", non);
}
