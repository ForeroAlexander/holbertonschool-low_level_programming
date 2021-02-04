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
	unsigned short lastnumber

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastnumber = (n % 10);

	if (lastnumber == 0)
		printf("last digit of %d is %d and is 0\n", n , lastnumber);
	else if (lastnumber > 5)
		printf("last digit of %d is %d and is greater than 5\n", n,
		       lastnumber);
	else
		printf("last digit of %d is %d and is less than 6 and not 0",n,
		       lastnumber);

	return (0);
}
