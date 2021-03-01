#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - main function
 *@argc: size of array of command
 *@argv: array of command
 *Return:  0
 */
int main(int argc, char *argv[])
{
	unsigned int x = 0;
	int i, j;
	if (argc > 1)
	{
		for (i = 1; i < argc ; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			x += atoi(argv[i]);
		}
		printf("%d\n", x);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
