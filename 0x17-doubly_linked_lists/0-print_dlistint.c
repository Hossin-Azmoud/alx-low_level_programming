#include "lists.h"
/**
* print_dlistint - print all elements of a doubly ll.
* @h: head of the doubly ll.
* Return: size of the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t      sz = 0;
	dlistint_t *current = h;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		sz++;
	}
	return (sz);
}
