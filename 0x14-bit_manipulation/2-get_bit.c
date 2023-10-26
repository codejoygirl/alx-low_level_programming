#include "main.h"

/**
 * get_bit - To getvalue of a bit at a given index
 * @n: The number to evaluate
 * @index: The index starting from 0, of bit we want to get
 * Return: The Value of bit at index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ho;

	if (index > 64)
		return (-1);

	ho = n >> index;

	return (ho & 1);
}
