#include "holberton.h"

void jack_bauer(void)
{
	short minutes;
	short hour;

	for (hour = 0; hour <= 23; hour++)
		for (minutes =0; minutes <= 59; minutes++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
}
