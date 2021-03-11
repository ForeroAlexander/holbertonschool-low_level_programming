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
	va_list arg;

	unsigned int i;
	char *tmp;

	if (separator == NULL)
		return;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(arg, char *);
		tmp = tmp ? tmp : "(nil)";
		printf("%s%s", tmp, separator);
	}
	va_end(arg);
}
