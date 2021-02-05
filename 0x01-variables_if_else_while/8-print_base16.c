#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Hexadecimal Numbers
 * Return: 0 for success
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
