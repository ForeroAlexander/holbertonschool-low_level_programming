#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: linked list data structure header
 */

void free_list(list_t *head)
{
	list_t *x;

	x = head;
	while (head != NULL)
	{
		x = head;
		head = head->next;
		free(x->str);
		free(x);
	}
	free(head);
}
