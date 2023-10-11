#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - This Executes action on all array element
 * @array: The array that will be modified
 * @size: Size of array
 * @action: Function to call on elements of an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL || size == 0)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; ++i)
		action(array[i]);
}
