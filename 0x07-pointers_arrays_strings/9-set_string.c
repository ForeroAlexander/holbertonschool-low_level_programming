#include "holberton.h"
/**
 *set_string - sets the value of a pointer to a char
 *@s: pointer to a string you are changing
 *@to: the string you are changing it to
 *
 *Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
