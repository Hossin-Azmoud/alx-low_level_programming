/**
* list_len - function that returns the num of elements in a list_t
* @h: list_t structure.
* Return: size_t num of elements
*/
size_t list_len(const list_t *h)
{
	size_t sz = 0;

	if (h == NULL)
		return (sz);

	sz++;

	sz += list_len(h->next);
	return (sz);
}
