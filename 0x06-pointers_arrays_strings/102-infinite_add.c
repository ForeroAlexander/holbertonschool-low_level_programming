#include "holberton.h"
#include <stdio.h>
/**
 *  infinite_add - print the tables to 9
 *@n1:number
 *@n2:number
 *@r:buff
 *@size_r: size of rxcy
 *Return: return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, result;
	for (n1 = 0; n1[i]; i++)
		;
	for (n2 = 0; n2[j]; j++)
		;
	for (; size_r != 0 && i != 0 && j != 0; i--, j--)
	{
		result = i + j;
	}
	r[size_r--] = result;
	printf("%d\n", r[size_r + 1]);
}
return (r);
}
