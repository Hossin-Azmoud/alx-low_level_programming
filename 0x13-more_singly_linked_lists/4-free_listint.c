#include "lists.h"
/**
* free_listint - a function that frees the list.
* @head: a pointer to the head of the list that will be freed.
* Return: always void
*/
void free_listint(listint_t *head)
{
	listint_t current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
