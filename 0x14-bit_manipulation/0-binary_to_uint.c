#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned
 * @b: the string of 0 and 1
 * Return: converted num or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	int n;

	if (b == NULL)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		len = 2 * len + (b[n] - '0');
	}

	return (len);
}
