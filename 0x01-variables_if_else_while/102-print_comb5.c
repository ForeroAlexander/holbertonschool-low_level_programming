#include <stdio.h>
/**
 *main - entry point
 *Return: 0 success
 *
 *
 */
int main(void)
{
int n1 = 48;
int n2 = 0;
int n3;

while (n2 <= 99)
{
	n3 = n2 + 1;
	while (n3 <= 99)
	{
		putchar ((n2 / 10) + n1);

		putchar ((n2 % 10) + n1);

		putchar (32);

		putchar ((n3 / 10) + n1);

		putchar ((n3 / 10) + n1);

		if (n1 != 98 || n2 != 99)
		{
			putchar(44);
			putchar(32);
		}
		n3 += 1;
	}
	n2 += 1;
}
putchar('\n');
return (0);
}
