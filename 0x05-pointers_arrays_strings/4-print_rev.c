#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - prototipo
 *@s: pointcater
 * Return: Always 0. (sucess)
 */

void print_rev(char *s)
{
	int n, m;

        for (n = 0; s[n] != '\0'; n++)
        {
                m = n;
        }
        for (; s[m] != '\0'; m--)
        {
                _putchar(s[m]);
        }
        _putchar('\n');
}
