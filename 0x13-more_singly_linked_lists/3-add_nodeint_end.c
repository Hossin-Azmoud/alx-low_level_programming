#include "lists.h"
/**
* add_nodeint_end - function that adds an element to the end of the list.
* @head: the head of the list.
* @n: data to be added as a node.
* Return: The newly created node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new  = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (new == NULL)
		return (NULL);

	new->n     = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new;
	return (new);
}
