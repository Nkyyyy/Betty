#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @str: pointer to the string
 * @head: pointer to the pointer head
 * Return: address of the new element,NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *struc;
	int len;

	for (len = 0; str[len] != '\0'; len++)

	struc = malloc(sizeof(list_t));
	if (struc == NULL)
		return (NULL);

	struc->str = strdup(str);
	struc->len = len;
	struc->next = (*head);
	*head = struc;

	return (*head);
}
