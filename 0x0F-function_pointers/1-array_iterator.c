#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes the function
 * @array: pointer to an array
 * @size: size of the elements
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
