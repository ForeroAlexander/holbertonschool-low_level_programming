#include "holberton.h"

/**
 * print_sign - Compare the variable N
 * @n: This is the entry
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
        if (n > 0)
	{
		_putchar('+');
		return (1);
	}
        else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
        else
	{
		_putchar('0');
		return (0);
	}
}
