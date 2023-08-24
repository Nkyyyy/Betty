#include "lists.h"
/**
 * add_node_end - add a new end to the end
 * @head: pointer to the structure
 * @str: pointer to the string
 * Return:  address of the new element,NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	list_t *temp = *head;

	while (str[len])
	{
		len++;
	}
	new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (!new) 
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
