#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Entry point
 * @n: const unsigned int
 * Return: Always 0 (sucess
 * @separator: string to be printed betwen numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", va_arg(print, int));
		else
			printf("%d%s", va_arg(print, int), separator);
	}
	printf("\n");

	va_end(print);
}
