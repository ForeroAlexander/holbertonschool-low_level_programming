#include "holberton.h"

void _puts(char *str)
{
	for (; *str != '\0';)
	{

		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
