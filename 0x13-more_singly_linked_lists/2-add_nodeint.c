#include "lists.h"
/**
 * add_nodeint - add a new node to the begining of the list
 * @head: pointer to the function
 * @n: the data of the list
 * Return: the address of the new element,NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
		return (0);

	p = malloc(sizeof(listint_t));
	{
		if (p == NULL)
		{
			return (NULL);
		}
		p->n = n;
		p->next = (*head);
		*head = p;
	}
	return (*head);
}
