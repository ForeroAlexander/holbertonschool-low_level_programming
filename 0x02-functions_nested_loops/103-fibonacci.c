#include <stdio.h>
/**
 * main - fibonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
	unsigned long count = 0, i, j, k;

	i = 0;
	j = 1;
	while (i + j <= 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0)
			count += k;
	}
	printf("%ld\n", count);
	return (0);
}
