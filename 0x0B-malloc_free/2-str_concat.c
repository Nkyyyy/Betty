#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to new memory or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, b;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = b = 0;

	for (i = 0; s1[i] != '\0'; i++)
	for (b = 0; s2[b] != '\0'; b++)

	s3 = malloc((i + b + 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	i = b = 0;

	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}

	while (s2[b] != '\0')
	{
		s3[i] = s2[b];
		i++, b++;
	}
	s3[i] = '\0';
	return (s3);
}
