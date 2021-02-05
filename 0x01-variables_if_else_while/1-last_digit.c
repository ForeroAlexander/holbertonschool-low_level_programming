#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int no;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	no = (n % 10);

	if (no == 0)
		printf("Last digit of %d is %d and is 0\n", n, no);
	else if (no > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, no);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, no);

	return (0);
}
