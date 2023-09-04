#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the imteger
 * @index: index starting from 0
 * Return: value of the bit at index index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int t;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (t = 0; t < index; t++)
		n = n >> 1;
	return ((n & 1));
}
