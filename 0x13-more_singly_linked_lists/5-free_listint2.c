#include "lists.h"
/**
 * free_listint2- free a listint_t list.
 * @head: pointer to pointer the first element of listint_t.
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
