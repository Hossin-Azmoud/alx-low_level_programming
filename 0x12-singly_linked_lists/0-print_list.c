#include "lists.h"
#include <stdio.h>
/**
* print_list - func that prints all element in a list_t
* @h: list.
* Return: element count of h.
*/
size_t print_list(const list_t *h)
{
	size_t sz = 0;

	if (h == NULL)
		return (sz);

	sz++;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
		printf("[%d] %s\n", h->len, h->str);

	sz += print_list(h->next);

	return (sz);
}
