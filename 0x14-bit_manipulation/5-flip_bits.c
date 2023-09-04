#include "main.h"

/**
 * flip_bits - gets the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum = n ^ m;
	unsigned long int total;

	for (total = 0; sum > 0;)
	{
		if ((sum & 1) == 1)
			total++;
		sum = sum >> 1;
	}
	return (total);
}
