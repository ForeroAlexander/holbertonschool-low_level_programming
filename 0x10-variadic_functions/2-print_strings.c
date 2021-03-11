#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *tmp;

	if (separator == NULL)
		separator = "";

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(string, char *);
		if (tmp == NULL)
			tmp = "(nil)";
		if (i == (n - 1))
			printf("%s", tmp);
		else
			printf("%s%s", tmp, separator);
	}
	printf("\n");

	va_end(string);
}
