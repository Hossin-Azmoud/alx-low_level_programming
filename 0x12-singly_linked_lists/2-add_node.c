#include "lists.h"
/**
* add_node - function that adds a node to the list.
* @head: the head of the list.
* @str: the node data to be added.
* Return: the created node.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	
	new_node->str  = strdup(str);
	new_node->len  = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
