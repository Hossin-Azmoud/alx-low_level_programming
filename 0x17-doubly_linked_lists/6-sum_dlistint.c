#include "lists.h"
/**
* sum_dlistint - return the sum of all (n) data fields in the linked list.
* @head: head of the list.
* Return: Sum of (n)
*/
int sum_dlistint(dlistint_t *head)
{
	int sum_ = 0;

	if (!head)
		return (sum_);

	sum_ += head->n;
	return (sum_ + sum_dlistint(head->next));
}
