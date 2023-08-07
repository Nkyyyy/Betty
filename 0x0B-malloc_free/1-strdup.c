#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a new string, a duplicate
 * @str: the original string
 * Return: NUlL if pointer is NULL, or ponter to new string
 */
char *_strdup(char *str)
{
	int i, r;
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
	for (r = 0; str[r]; r++)
	{
		str2[r] = str[r];
	}

	return (str2);
}
