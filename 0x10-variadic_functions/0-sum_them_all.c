#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: initial argument
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0;
	va_list grand;

	if (n == 0)
		return (0);
	va_start(grand, n);

	for (i = 0; i < n; i++)
		add += va_arg(grand, int);

	va_end(grand);
	return (add);
}
