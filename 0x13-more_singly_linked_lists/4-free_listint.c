#include "lists.h"
/**
 * free_listint- free a listint_t list.
 * @head: pointer to pointer the first element of listint_t.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = NULL;

	while (head != '\0')
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
