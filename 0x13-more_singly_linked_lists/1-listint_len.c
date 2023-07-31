#include "lists.h"
/**
* listint_len - func that gets the line of a llist.
* @h: pointer to list.
* Return: integer, size in elements.
*/
size_t listint_len(const listint_t *h)
{
	size_t sz;

	if (h == NULL)
		return (sz);

	sz++;
	if (h->next)
		sz += listint_len(h->next);

	return (sz);
}
