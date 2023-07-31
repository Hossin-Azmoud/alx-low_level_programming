#include <stdio.h>
#include "lists.h"
/**
* print_listint - prints all elements from a list.
* @h: pointer to the list.
* Return: Size of the list.
*/
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);

	size++;
	printf("%i\n", h->n);

	if (h->next != NULL)
		size += print_listint(h->next);

	return (size);
}
