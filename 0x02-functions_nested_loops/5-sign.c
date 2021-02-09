#include "holberton.h"

int print_sign(int n)
{
	if (n % 10 > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n % 10 == 0)
	{
		_putchar('0');
	       	return(0);
	}
	else
	{
		_putchar(45);
		return(-1);
	}
}
