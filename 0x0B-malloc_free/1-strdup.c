#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a new string, a duplicate
 * @str: the original string
 * Return: NUlL if pointer is NULL, or ponter to new string
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{	
		aaa[r] = str[r];
	}

	return (aaa);
}
