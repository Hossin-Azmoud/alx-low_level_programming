#include "lists.h"
/**
* free_listint2 - a func that frees a llist then sets the head to null
* @head: head of the list.
* Return: always void
*/
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *tmp;

	if (*head == NULL || head == NULL)
		return;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}

	*head = NULL;
}
