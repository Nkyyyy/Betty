#include "main.h"
/**
 * factorial - returns the factorial of n
 * @n: the given input
 * Return: -1 if n < 0 else factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
