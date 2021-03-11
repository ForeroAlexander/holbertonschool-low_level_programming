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
	va_list arg;
	int i, sum;

	va_start(arg, n);

	sum = 0;
	for (i = 0; i < (int)n; i++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}
