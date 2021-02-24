#include "holberton.h"
/**
 *_sqrt_recursion -returns the value of x raised to the power of y.
 *@n: integer
 *@i: integer
 *Return: integer
 */
int power(int n, int i);
int _sqrt_recursion(int n)
{
	return (power(n, 1));
}


/**
 *power - checks if an integer is the square root of a number
 *@n : parameter designing an integer
 *@i : integer
 *
 *Return: i
 */
int power(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (i * i > n)
		return (-1);
	else
		return (power(n, i + 1));
}
