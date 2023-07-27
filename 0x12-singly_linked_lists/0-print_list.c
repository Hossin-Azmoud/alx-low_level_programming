/**
* print_list - func that prints all element in a list_t
* @h: list.
* Return: element count of h.
*/
size_t print_list(const list_t *h)
{
	size_t sz = 0;
	list_t *curr = h;

	if (curr == NULL)
		return (sz);


	while (curr != NULL)
	{
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", curr->str);
		curr = curr->next;
	}

	return (sz);
}
