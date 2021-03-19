#include "lists.h"

/**
 *_strlen - returns the length of a string
 *@s: is a character
 * Return: 0;
 */

int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);
	return ((1) + _strlen(s + 1));
}

/**
 * add_node - function that adds a new node
 * @head: linked list data structure header
 * @str: value of new node
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int l;

	l = _strlen(str);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = *head;
	new->len = l;

	*head = new;

	return (*head);
}
