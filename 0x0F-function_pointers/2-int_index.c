#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Compare elements of an array using cmp
 * @array: Array to be compared
 * @size: Size of the array
 * @cmp: Function to call on array elements
 *
 * Return: Index of first element cmp does not return 0.
 * -1 If no element matches. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
