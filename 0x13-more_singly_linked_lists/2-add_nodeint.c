#include "lists.h"
/**
* add_nodeint - a function to add nodes.
* @head: The head of the list.
* @n: data to be added.
* Return: the added node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n    = n;
	*head     = new;

	return (new);
}
