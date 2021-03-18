#include "lists.h"

/**
 * list_len - function that return all the elements of a list
 * @h: linked list data structure header
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
