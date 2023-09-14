#include "lists.h"
/**
* get_dnodeint_at_index - func that gets the node at index (index)
* @head: head of the list.
* @index: index we want.
* Return: node at index (index)
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	return (get_dnodeint_at_index(head->next, (index - 1)));
}
