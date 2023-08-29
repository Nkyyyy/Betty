#include "lists.h"
/**
 * sum_listint - gets sum of all the data(n)
 * @head: points to the first node in the list
 * Return: the sum of the data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
