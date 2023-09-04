#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node at its position
 * @index: the position of the node
 * @head: pointer to the first node of a list
 * Return: nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
