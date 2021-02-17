#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - Function
 * @str: parameter
 * Return: void
 */

void puts2(char *str)
{
	int cont = 0;

	while (str[cont] != '\0')
	{
		if (cont % 2 == 0)
		{
			_putchar(str[cont]);
		}
		cont++;
	}
	_putchar('\n');
}
