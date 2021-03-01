#include "holberton.h"

/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to the string to convert
 *
 * Return: The integer that was converted
 */

int _atoi(char *s)
{
	unsigned int n, i;
	int x;
	n = 0;
	x = 1;
        for (i = 0 ; s[i] != '\0' ; i++)
        {
                if (s[i] >= '0' && s[i] <= '9')
                {
                        n = (s[i] - '0') + n * 10;
                        if (s[i + 1] == ' ')
                        {
                                break;
                        }
                }
                else if (s[i] == '-')
                {
                        x = x * -1;
                }
        }
	return (n *x);
}
