#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements 
 *@h: node head of a own list
 *Return: always 0 (sucess)
 *
 */
size_t print_list(const list_t *h)
{

	size_t n;

	n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
