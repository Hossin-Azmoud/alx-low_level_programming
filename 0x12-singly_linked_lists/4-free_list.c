#include "lists.h"
/**
* free_list - function that gets a pointer
* to the head of the list then frees it.
* @head: pointer to linked list
* Return: always (void)
*/
void free_list(list_t *head)
{
	list_t *curr = head;

	if (head == NULL)
		return;

	for (; (curr != NULL); (curr = curr->next))
	{
		free(curr->str);
		free(curr);
	}
}
