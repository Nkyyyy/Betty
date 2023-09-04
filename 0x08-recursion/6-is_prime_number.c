#include "main.h"
int actual_prime_number(int n, int i);
/**
 * is_prime_number - returns 1 if the integer is a prime number
 * @n: the integer
 * Return: return 1 for prime numbers otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - recursively checks for prime number
 * @n: the integer
 * @i: iterator
 * Return: return 1 for prime numbers otherwise 0
 */
int actual_prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime_number(n, i - 1));
}
