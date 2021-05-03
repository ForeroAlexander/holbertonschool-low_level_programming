#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: head of the node
 * @idx: index where to place node
 * @n: data for the node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *tmpcount = *h, *tmp2;
	dlistint_t *new_node;
	unsigned int cont = 0;

	if (*h == NULL)
		return (NULL);
	while (tmpcount != NULL)
		tmpcount = tmpcount->next, cont++;
	if (idx > cont)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL, new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (cont = 0; cont < idx; cont++)
		tmp2 = tmp, tmp = tmp->next;
	new_node->next = tmp;
	new_node->prev = tmp2;
	tmp2->next = new_node;
	if (tmp)
		tmp->prev = new_node;
	return (new_node);
}
