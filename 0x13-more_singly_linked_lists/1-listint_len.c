#include "lists.h"
/**
 * listint_len - return number of elements
 * @h: the pointer to the element
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
