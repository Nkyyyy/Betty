#include "main.h"
/**
 * set_bit - sets the value of bit to 1
 * @n: points to the bit for manipulation
 * @index: index starting from 0
 * Return: 1 if it worked else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	set = 1;
	set = set << index;
	*n = ((*n) | set);
	return (1);
}
