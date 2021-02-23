#include <stdio.h>
#include "holberton.h"

/**
 * print_chessboard - Function
 * @a: parameter
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int k, x;

	k = 0;
	x = 0;

	for (x = 0; x < 8; x++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[x][k]);
		}
		_putchar('\n');
	}
}
