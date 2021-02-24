#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string coming
 * Return: void
 **/
void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
	if (*(s - 1) == '\n')
		_putchar (10);
}
