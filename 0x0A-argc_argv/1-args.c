#include "holberton.h"
#include <stdio.h>

/**
 *main - main function
 *@argc: size of array of command
 *@argv: array of command
 *Return:  0
 */

int main(int argc, char *argv[])
{
	argv[argc] = '\0';
	argc = argc - 1;
	printf("%d\n", argc);
	return (0);
}
