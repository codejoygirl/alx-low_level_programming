#include "main.h"

/**
 * clear_bit - To set value of bit to 0 at given index
 * @n: 	The pointer to decimal number being changed
 * @index: The index position to be changed
 * Return:Return 1 if it worked,and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int in = 1;
	unsigned int ho;

	if (index > 64)
		return (-1);
	ho = index;
	while (ho > 0)
		in *= 2, ho--;

	if ((*n >> index) & 1)
		*n -= in;

	return (1);
}
