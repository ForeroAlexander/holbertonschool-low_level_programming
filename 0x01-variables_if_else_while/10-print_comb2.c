#include <stdio.h>
#include <stdlib.h>
/**
 * main - comma
 * Return: 0 for success
 */
int main(void)
{
	int nd;
	int i;

	for (nd = 48; nd <= 57; nd++)
	{
		for (i = 48; i <= 57; i++)
		{
			putchar(nd);
			putchar(i);
			if (nd == 57 && i == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
