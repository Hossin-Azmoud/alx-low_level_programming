#include "lists.h"
/**
* insert_dnodeint_at_index - insert node at some inedx.
* @h: head of the list.
* @idx: index we need to insert at.
* @n: value that will be associated with the added node.
* Return: the new allocated node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *at_index = *h;
	dlistint_t  *new      = malloc(sizeof(dlistint_t));

	if (!h || !idx)
		return (add_dnodeint(h, n));

	if (!new)
		return (NULL);

	new->n = n;
	while (idx > 0 && at_index)
		at_index = at_index->next;

	if (idx == 0 && (at_index))
	{
		new->next       = at_index;
		new->prev       = at_index->prev;
		new->prev->next = new;
		at_index->prev  = new;

		return (new);
	}

	free(new);
	return (NULL);
}
