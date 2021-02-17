#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
int _strlen(char *s);

/**
 * puts_half - Function
 * @str: parameter
 * Return: void
 */

void puts_half(char *str)
{
	int longitud;
	int mitad;

	if (str[0] == '\0')
	{
		str = "\0";
	}
	else
	{
		longitud = _strlen(str);

		if ((longitud % 2) == 0)
		{
			mitad = longitud / 2;
		}
		else
		{
			mitad = ((longitud - 1) / 2);
			mitad = mitad + 1;
		}

		while (str[mitad] != '\0')
		{
			_putchar(str[mitad]);
			mitad++;
		}
	}
	_putchar('\n');
}
/**
 * _strlen - Function
 * @s: parameter
 * Return: i
 */

int _strlen(char *s)
{
	int i = 1;

	if (s[0] == '\0')
	{
		i = 0;
	}
	else
	{
		while (s[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}
