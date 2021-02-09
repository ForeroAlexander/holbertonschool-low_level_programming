#include "holberton.h"

/**
 * print_last_digit - ultimo digito de un numero
 *
 * @n: entry point
 *
 * Return: return las digit
 **/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
