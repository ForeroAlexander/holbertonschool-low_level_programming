#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Entry point
 * @i: const unsigned int
 * Return: Always 0 (sucess)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(arg, n);
	for(i = 0; i < n; i++)
	{
		separator = ((i + 1) == n) ? ("") : separator;
		printf(
			"%d%s",
			va_arg(arg, int),
			separator
			);
	}
}
