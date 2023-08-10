#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes
 * Return: pointer to new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3 = 0;
	unsigned int len1, len2, a, b = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s3 = malloc(sizeof(char) * (len1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s3)
		return (NULL);

	while (a < len1)
	{
		s3[a] = s1[a];
		a++;
	}

	while (n < len2 && a < (len1 + n))
		s3[a++] = s2[b++];

	while (n >= len2 && a < (len1 + len2))
		s3[a++] = s2[b++];

	s3[a] = '\0';

		return (s3);
}
