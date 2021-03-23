#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: header node
 * Return: head's node data
 */

int pop_listint(listint_t **head)
{
	listint_t *x, *y;
	int z;

	x = *head;

	if (x == NULL)
		return (0);
	z = x->n;
	y = x->next;
	free(x);
	*head = y;

	return (z);
}
