#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list all;
	int i = 0;
	char *tmp;

	va_start(all, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(all, int));
			break;
		case 'i':
			printf("%i", va_arg(all, int));
			break;
		case 'f':
			printf("%f", va_arg(all, double));
			break;
		case 's':
			tmp = va_arg(all, char*);
			if (tmp != NULL)
			{
				printf("%s", tmp);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		    || format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(all);
}
