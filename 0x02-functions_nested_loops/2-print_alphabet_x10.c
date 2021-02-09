#include "holberton.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)

{
	int i;
	int n;
        for (n = 0 ; n <= 9 ; n++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
