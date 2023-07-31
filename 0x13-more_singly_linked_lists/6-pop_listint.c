#include "lists.h"
/**
 * pop_listint - deletes the head, and returns the heads node data
 * @head: ** head of the linked list.
 * Return: head data or 0 otherwise if failure
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *new_head;

	if (!*head)
		return (0);

	new_head = *head;
	num = new_head->n;
	*head = new_head->next;

	free(new_head);

	return (num);
}
