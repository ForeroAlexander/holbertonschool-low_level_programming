#include "holberton.h"
/**
 * factorial - get factorial of a number
 * @n: is a given number
 * Return: factorial or -1 if n is lees than 0 or
 * 1 if n is 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * (factorial(n - 1)));
}
