#include "lists.h"
/**
* add_dnodeint - add a new in the beginning of list.
* @head: double pointer to the start of the list.
* @n:    value to store in the new node.
* Return: newly created node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n       = n;
	node->next    = *head;
	node->prev    = NULL;

	if (*head)
		(*head)->prev = node;

	*head = node;
	return (node);
}
