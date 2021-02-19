#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int front;
	int back;
	int temp;

	front = 0;
	back = n - 1;
	while (front < back)
	{
		temp = a[front];
		a[front] = a[back];
		a[back] = temp;
		front++;
		back--;
	}
}
