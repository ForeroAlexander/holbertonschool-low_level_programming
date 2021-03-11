#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - entry point
 *@n: const unsigned int
 *Return: always 0 (success)
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list sum;

	int c;
	unsigned int i;

	if (n == 0)
		return (0);

	c = 0;
	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		c += va_arg(sum, int);
	}
	va_end(sum);
	return (c);
}
