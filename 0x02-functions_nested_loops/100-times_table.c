#include "holberton.h"

/**
 * print_times_table - table.
 * @n: number
 *
 * Return: nothing.
 */
void print_times_table(int n)
{
	int i, j, a, u, d, c;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			a = i * j;
			d = (a / 10) % 10;
			u = a % 10;
			c = a / 100;
			if (c != 0)
				_putchar('0' + c);
			if (c != 0 || d != 0)
				_putchar('0' + d);
			_putchar('0' + u);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 100)
					_putchar(' ');
				if (i * (j + 1) < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
