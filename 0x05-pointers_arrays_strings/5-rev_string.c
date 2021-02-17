#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string.
 *@s: pointer
 * Return: Always 0. (sucess)
 */
void rev_string(char *s)
{

	for (; *s != '\0';)
	{

		_putchar(*s);
		s = s + 1;
	}
	_putchar('\n');

}
