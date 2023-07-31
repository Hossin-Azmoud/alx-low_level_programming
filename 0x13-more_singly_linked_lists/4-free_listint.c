#include "lists.h"
/**
* free_listint - a function that frees the list.
* @head: a pointer to the head of the list that will be freed.
* Return: always void
*/
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *tmp;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
