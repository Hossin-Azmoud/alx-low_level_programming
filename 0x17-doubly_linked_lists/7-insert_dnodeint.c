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
	int i = idx;
	dlistint_t *at_index = NULL;
	dlistint_t  *new      = malloc(sizeof(dlistint_t));

	if (!h || idx <= 0)
		return (add_dnodeint(h, n));

	if (!new)
		return (NULL);

	at_index = *h;
	new->n   = n;

	while (i > 0 && at_index)
	{
		at_index = at_index->next;
		i--;
	}
	
	if (!at_index)
	{
		free(new);
		return (NULL);
	}
	
	printf("valid %p %i\n", (void*)at_index, (i));
	new->next       = at_index;
	new->prev       = at_index->prev;
	new->prev->next = new;
	at_index->prev  = new;
	return (new);
}
