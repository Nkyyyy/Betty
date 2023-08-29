#include "lists.h"
/**
 * create_new_node - cretes a new node
 * @n: data
 * Return: the new node
 */
listint_t *create_new_node(int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	newnode->next = NULL;

	return (newnode);
}
/**
 * insert_nodeint_at_index - inserts a new node at a position
 * @head: points to the list
 * @idx: index
 * @n: the data
 * Return: pointer to the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *old_temp;
	listint_t *newnode;
	unsigned int i;

	temp = *head;

	if (head == NULL)
		return (NULL);

	newnode = create_new_node(n);

	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	if (idx == 0)
	{
		*head = newnode;
	}
	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		newnode->next = temp;

	else
	{
		old_temp = temp->next;
		temp->next = newnode;
		newnode->next = old_temp;
	}
	return (newnode);
}
