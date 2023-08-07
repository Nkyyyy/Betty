#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars and fill with c
 * @size: size of the string
 * @c: the character to fill the array with
 * Return: pointer the the character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	p = malloc(size * (sizeof(char)));

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';

	return (p);
}
