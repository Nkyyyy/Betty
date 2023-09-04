#include "lists.h"
/**
 * pop_listint - deletes the first node
 * @head: double pointer to the list
 * Return: head data n or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head);
	*head = (*head)->next;
	free(temp);
	return (n);
}
