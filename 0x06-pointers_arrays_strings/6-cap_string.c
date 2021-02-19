#include "holberton.h"
/**
 *cap_string - Function that capitalizes all words of a string.
 *@s: String to be changed
 *
 * Return: string modified.
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	while (s[i])
	{
		if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			if (s[i] == 32 || s[i] == ',' || s[i] == ';' ||
			    s[i] == '{' || s[i] == '.' || s[i] == '!' ||
			    s[i] == '?' || s[i] == '}' || s[i] == 34 ||
			    s[i] == '(' || s[i] == ')' || s[i] == '\n' ||
			    s[i] == '\t')
				s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
