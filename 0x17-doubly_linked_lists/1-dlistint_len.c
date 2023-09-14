#include "lists.h"

/**
* dlistint_len - returns the length of a doubly linked list.
* @h: pointer to the head.
* Return: element count of h.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t sz = 0;

	if (!h)
		return (sz);
	return (sz + dlistint_len(h->next) + 1);
}
