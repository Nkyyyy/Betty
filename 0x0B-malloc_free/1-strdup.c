#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a new string, a duplicate
 * @str: the original string
 * Return: NUlL if pointer is NULL, or ponter to new string
 */
char *_strdup(char *str)
{
	int i;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)

	str2 = malloc((i + 1) * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	str2[i] = str[i];

	return (str2);
}
