#include "main.h"
/**
 * swap_int - swap between two pointers
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int empty;
	int *c = &empty;

	*c = *a;
	*a = *b;
	*b = *c;
}
