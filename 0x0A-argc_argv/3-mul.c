#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: size of array of command
 *@argv: array of command
 *
 *Return:  0
 */
int main(int argc, char *argv[])
{
	int mull = 0;
	if (argc == 3)
	{
		mull = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mull);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
