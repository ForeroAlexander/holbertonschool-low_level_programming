#include "holberton.h"
/**
 * _strlen_recursion - get length of a string
 * @s: is a string
 * Return: length of the string s
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
	else
	{
		return (0);
	}
}
