#include "lists.h"
/**
* free_dlistint - func to free a dl linked list.
* @head: head of the list.
* Return: Void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *nxt     = NULL;

	while (current)
	{
		nxt = current->next;
		free(current);
		current = nxt;
	}
}
