#include "lists.h"
/**
* add_node_end - function that adds a node to the end of the list.
* @head: refrence to the start of the list.
* @str: data that will be held by the node.
* Return: Tha address of the added new node or NULL if failure.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new  = malloc(sizeof(list_t));
	list_t *curr = *head;

	if (new == NULL || *head == NULL)
		return (new);

	new->str = strdup(str);
	new->len = strlen(str);

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new;
	return (new);
}
