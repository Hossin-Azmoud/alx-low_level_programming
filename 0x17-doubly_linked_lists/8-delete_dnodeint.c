#include "lists.h"
/**
* delete_dnodeint_at_index - delete node at some index.
* @head: head of the list.
* @index: the index of the node to delete.
* Return: 1 on success, -1 on failrue.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t  *at_index = NULL;
	dlistint_t  *prev, *next;

	if (!head)
		return (-1);

	at_index = *head;
	while (index > 0 && at_index)
	{
		at_index = at_index->next;
		index--;
	}

	if (!at_index)
		return (-1);

	prev = at_index->prev;
	next = at_index->next;

	if (prev)
		prev->next = next;

	if (next)
		next->prev = prev;

	if (at_index == *head)
		*head = (*head)->next;
	free(at_index);
	return (1);
}
