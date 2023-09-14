#include "lists.h"
/**
* add_dnodeint_end - adds a node in the end of the list.
* @head: head of the list.
* @n:    value of the node that will be added.
* Return: newly allocated node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *end = *head;

	if (!new)
		return (NULL);

	new->n = n;
	while (end)
	{
		if (!(end->next))
			break;
		end = end->next;
	}

	if (!end)
	{
		(*head) = new;
		return (new);
	}
	new->next = NULL;
	new->prev = end;
	end->next = new;
	return (new);
}
