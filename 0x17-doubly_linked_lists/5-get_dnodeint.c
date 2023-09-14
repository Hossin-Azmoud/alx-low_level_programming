#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	return get_dnodeint_at_index(head->next, (index - 1));
}
