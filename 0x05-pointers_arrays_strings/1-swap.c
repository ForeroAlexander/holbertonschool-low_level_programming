#include "holberton.h"
#include <stdio.h>
/**
 *swap_int - function that swaps the values of two integer
 *@a: pointer
 *@b: pointer
 *
*Return : Always 0 (Sucess)
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
