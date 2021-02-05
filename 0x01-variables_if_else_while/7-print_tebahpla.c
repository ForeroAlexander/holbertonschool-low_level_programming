#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Putchar Z to A
 * Return: 0 for success
 */
int main(void)
{
	char A = 'a';

	for (A = 'z'; A >= 'a'; A--)
		putchar(A);

	putchar('\n');

	return (0);
}
