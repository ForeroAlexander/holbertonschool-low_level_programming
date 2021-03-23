#include "lists.h"
/**
 *  * add_nodeint_end - add  a new node to the beggining of the listint_t.
 * @head: pointer to pointer *head, that point to the structure.
 * @n: element int
 * Return: the numbers of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *ptr = NULL;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);
}
