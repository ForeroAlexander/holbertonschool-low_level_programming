#include "holberton.h"
#include <stdio.h>

/**
 *main - main function
 *@argc: size of array of command
 *@argv: array of command
 *
 *Return:  0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
