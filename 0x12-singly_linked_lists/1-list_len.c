#include "lists.h"
/**
 * list_len - returns the number of elements in the list
 * @h: the poniter to the first node
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
