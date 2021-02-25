#include "holberton.h"
/**
 * _strlen_recursion - function length
 *@s:var chaine
 *Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 *palindrome_check - fun
 *@s: char
 *@i: integer
 *Return: 0 or 1 or result of check
 */
int palindrome_check(char *s, int i)
{

	if (i <= 1)
		return (1);
	else if (*s == s[i - 1])
		return (palindrome_check(s + 1, i - 2));
	else
		return (0);
}

/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *@s: string
 *Return: 1 if palindrome and 0 if is not
 */
int is_palindrome(char *s)
{
	int l;
	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);
	return (palindrome_check(s, l));
}
